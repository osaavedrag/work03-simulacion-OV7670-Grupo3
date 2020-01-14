`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:14:22 12/02/2019 
// Design Name: 
// Module Name:    cam_read 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module cam_read #(
		parameter AW = 15 // Cantidad de bits  de la dirección 
		)(
		input pclk,
		input rst,
		input vsync,
		input href,
		input [7:0] px_data,

		output [AW-1:0] mem_px_addr,
		output [7:0]  mem_px_data,
		output px_wr
   );
	
reg [7:0]RDatos;
reg [7:0]Rdatos;
reg [14:0]Paddr;
reg RWrite;
reg count = 0;

always @ (negedge px_wr) begin
	if(vsync==0) begin
		Paddr = Paddr+1;
		end
	else Paddr = 0;
end


always @ (posedge pclk) begin
		if(href==1) begin
			if(count == 0) begin
				RWrite = 0;
				Rdatos[7] = RDatos[7];
				Rdatos[6] = RDatos[6];
				Rdatos[5] = RDatos[5];
				Rdatos[4] = RDatos[2];
				Rdatos[3] = RDatos[1];
				Rdatos[2] = RDatos[0];
				count = count+1;
			end
			if(count == 1) begin
				Rdatos[1] = RDatos[4];
				Rdatos[0] = RDatos[3];
				count = count+1;
				RWrite = 1;
			end
		end
end

assign mem_px_addr = Paddr;
assign px_data = RDatos;
assign mem_px_data = Rdatos;
assign px_wr = RWrite;

endmodule
