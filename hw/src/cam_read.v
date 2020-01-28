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

		output reg [AW-1:0] mem_px_addr = 0,
		output reg [7:0]  mem_px_data = 0,
		output reg px_wr = 0
   );

reg [0:0] C = 0;

always @ (negedge px_wr) begin
	if(vsync == 0) begin
		mem_px_addr = mem_px_addr + 1;
		end
	else begin 
		mem_px_addr = 0;
	end
end

always @ (posedge pclk) begin
		if(href == 1) begin
			if(C == 0) begin
				px_wr = 0;
				mem_px_data[7] = px_data[7];
				mem_px_data[6] = px_data[6];
				mem_px_data[5] = px_data[5];
				mem_px_data[4] = px_data[2];
				mem_px_data[3] = px_data[1];
				mem_px_data[2] = px_data[0];
				C = 1;
			end 
			else begin
				mem_px_data[1] = px_data[4];
				mem_px_data[0] = px_data[3];
				C = 0;
				px_wr = 1;
			end
		end
end

endmodule

/*	
reg [7:0]RDatos;
reg [7:0]Rdatos;
reg [14:0]Paddr;
reg RWrite;
reg count = 0;
reg [7:0]Ccount;
reg [7:0]Pcount;*/

/*
assign mem_px_addr = Paddr;
assign px_data = Rdatos;
assign mem_px_data = RDatos;
assign px_wr = RWrite;

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
				if(Pcount <= 160) Pcount = Pcount + 1;
				else Pcount = 0;*/
			//end
		/*else begin
		if(Ccount <= 120) Ccount = Ccount + 1;
		else Ccount = 0;
		end*/
		//end
//end

/*always @ (negedge px_wr) begin
	if(vsync==0) begin
		Paddr = Paddr+1;
		end
	else begin 
		Paddr = 0;
	end
end


assign pixel = Pcount;
assign Column = Ccount;*/

//endmodule
