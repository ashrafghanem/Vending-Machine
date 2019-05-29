--------------------------------------------------------------------------------
-- COMPANY: 
-- ENGINEER:
--
-- CREATE DATE:   23:23:17 11/30/2017
-- DESIGN NAME:   
-- MODULE NAME:   D:/ISE PROJECTS/VENDINGMACHINE/VENDINGMACHINETB.VHD
-- PROJECT NAME:  VENDINGMACHINE
-- TARGET DEVICE:  
-- TOOL VERSIONS:  
-- DESCRIPTION:   
-- 
-- VHDL TEST BENCH CREATED BY ISE FOR MODULE: VENDINGMACHINE
-- 
-- DEPENDENCIES:
-- 
-- REVISION:
-- REVISION 0.01 - FILE CREATED
-- ADDITIONAL COMMENTS:
--
-- NOTES: 
-- THIS TESTBENCH HAS BEEN AUTOMATICALLY GENERATED USING TYPES STD_LOGIC AND
-- STD_LOGIC_VECTOR FOR THE PORTS OF THE UNIT UNDER TEST.  XILINX RECOMMENDS
-- THAT THESE TYPES ALWAYS BE USED FOR THE TOP-LEVEL I/O OF A DESIGN IN ORDER
-- TO GUARANTEE THAT THE TESTBENCH WILL BIND CORRECTLY TO THE POST-IMPLEMENTATION 
-- SIMULATION MODEL.
--------------------------------------------------------------------------------
LIBRARY IEEE;
USE IEEE.STD_LOGIC_1164.ALL;
 
-- UNCOMMENT THE FOLLOWING LIBRARY DECLARATION IF USING
-- ARITHMETIC FUNCTIONS WITH SIGNED OR UNSIGNED VALUES
--USE IEEE.NUMERIC_STD.ALL;
 
ENTITY VENDINGMACHINETB IS
END VENDINGMACHINETB;
 
ARCHITECTURE BEHAVIOR OF VENDINGMACHINETB IS 
 
    -- COMPONENT DECLARATION FOR THE UNIT UNDER TEST (UUT)
 
    COMPONENT VENDINGMACHINE
    PORT(
         S : IN  STD_LOGIC;
         CLOCK : IN  STD_LOGIC;
         RESET : IN  STD_LOGIC;
         C : IN  STD_LOGIC_VECTOR(2 DOWNTO 0);
         P : IN  STD_LOGIC_VECTOR(2 DOWNTO 1);
         R : OUT  STD_LOGIC_VECTOR(2 DOWNTO 0);
         PRODUCT : OUT  STD_LOGIC_VECTOR(2 DOWNTO 1)
        );
    END COMPONENT;
    

   --INPUTS
   SIGNAL S : STD_LOGIC := '0';
   SIGNAL CLOCK : STD_LOGIC := '0';
   SIGNAL RESET : STD_LOGIC := '0';
   SIGNAL C : STD_LOGIC_VECTOR(2 DOWNTO 0) := (OTHERS => '0');
   SIGNAL P : STD_LOGIC_VECTOR(2 DOWNTO 1) := (OTHERS => '0');

 	--OUTPUTS
   SIGNAL R : STD_LOGIC_VECTOR(2 DOWNTO 0);
   SIGNAL PRODUCT : STD_LOGIC_VECTOR(2 DOWNTO 1);

   -- CLOCK PERIOD DEFINITIONS
   CONSTANT CLOCK_PERIOD : TIME := 100 NS;
 
BEGIN
 
	-- INSTANTIATE THE UNIT UNDER TEST (UUT)
   UUT: VENDINGMACHINE PORT MAP (
          S => S,
          CLOCK => CLOCK,
          RESET => RESET,
          C => C,
          P => P,
          R => R,
          PRODUCT => PRODUCT
        );

   -- CLOCK PROCESS DEFINITIONS
   CLOCK_PROCESS :PROCESS
   BEGIN
		CLOCK <= '0';
		WAIT FOR CLOCK_PERIOD/2;
		CLOCK <= '1';
		WAIT FOR CLOCK_PERIOD/2;
   END PROCESS; 

   -- STIMULUS PROCESS
   STIM_PROC: PROCESS
   BEGIN	
	-- PRODUCT1 [PRICE = 3]
	
		-- 1 + 1 + 1 .. REMAINDER = 0
		WAIT FOR 25 NS; 
		S <= '1';
		WAIT FOR 20 NS;
		P <="01";
		WAIT FOR 30 NS;
		S <= '0';
		WAIT FOR 150 NS;
		C <="010";		
		WAIT FOR 100 NS; 
		C <="010"; 		
		WAIT FOR 100 NS;
		C <="010"; 		
		WAIT FOR 100 NS;
		C <= "000";
		WAIT FOR 200 NS;
		P <= "00";
		RESET <= '1';
		
--		-- 0.5 + 0.5 + 1 + 0.5 + 0.5 .. REMAINDER = 0
--		WAIT FOR 25 NS; 
--		S <= '1';
--		WAIT FOR 20 NS;
--		P <="01";		
--		WAIT FOR 30 NS;
--		S <= '0';		
--		WAIT FOR 150 NS;
--		C <="001";		
--		WAIT FOR 100 NS; 
--		C <="001"; 		
--		WAIT FOR 100 NS;
--		C <="010"; 
--		WAIT FOR 100 NS;
--		C <="001";		
--		WAIT FOR 100 NS; 
--		C <="001"; 		
--		WAIT FOR 100 NS;
--		C <= "000";
--		WAIT FOR 200 NS;
--		P <= "00";
--		RESET <= '1';	
		
--		-- 1 + 0.5 + 2 .. REMAINDER = 0.5
--		WAIT FOR 25 NS; 
--		S <= '1';
--		WAIT FOR 20 NS;
--		P <="01";		
--		WAIT FOR 30 NS;
--		S <= '0';	
--		WAIT FOR 150 NS;
--		C <="010";		
--		WAIT FOR 100 NS; 
--		C <="001"; 		
--		WAIT FOR 100 NS;
--		C <="100"; 
--		WAIT FOR 100 NS;
--		C <= "000";
--		WAIT FOR 200 NS;
--		P <= "00";
--		RESET <= '1';
		
--		-- 2 + 0.5 + 2 .. REMAINDER = 1.5
--		WAIT FOR 25 NS; 
--		S <= '1';
--		WAIT FOR 20 NS;
--		P <="01";		
--		WAIT FOR 30 NS;
--		S <= '0';	
--		WAIT FOR 150 NS;
--		C <="100";		
--		WAIT FOR 100 NS; 
--		C <="001"; 		
--		WAIT FOR 100 NS;
--		C <="100"; 
--		WAIT FOR 100 NS;
--		C <= "000";
--		WAIT FOR 200 NS;
--		P <= "00";
--		RESET <= '1';
		
------------------------------------------------------			
	-- PRODUCT2 [PRICE = 2.5]
	
--		-- 1 + 1 + 1 .. REMAINDER = 0.5
--		WAIT FOR 25 NS; 
--		S <= '1';
--		WAIT FOR 20 NS;
--		P <="10";
--		WAIT FOR 30 NS;
--		S <= '0';
--		WAIT FOR 150 NS;
--		C <="010";		
--		WAIT FOR 100 NS; 
--		C <="010"; 		
--		WAIT FOR 100 NS;
--		C <="010"; 		
--		WAIT FOR 100 NS;
--		C <= "000";
--		WAIT FOR 200 NS;
--		P <= "00";
--		RESET <= '1';
		
--		-- 0.5 + 0.5 + 0.5 + 0.5 + 0.5 .. REMAINDER = 0
--		WAIT FOR 25 NS; 
--		S <= '1';
--		WAIT FOR 20 NS;
--		P <="10";
--		WAIT FOR 30 NS;
--		S <= '0';
--		WAIT FOR 150 NS;
--		C <="001";		
--		WAIT FOR 100 NS; 
--		C <="001"; 		
--		WAIT FOR 100 NS; 
--		C <="001";
--		WAIT FOR 100 NS; 
--		C <="001";
--		WAIT FOR 100 NS; 
--		C <="001"; 		
--		WAIT FOR 100 NS;
--		C <= "000";
--		WAIT FOR 200 NS;
--		P <= "00";
--		RESET <= '1';
	
--		-- 0.5 + 0.5 + 1 + 0.5 .. REMAINDER = 0
--		WAIT FOR 25 NS; 
--		S <= '1';
--		WAIT FOR 20 NS;
--		P <="10";
--		WAIT FOR 30 NS;
--		S <= '0';
--		WAIT FOR 150 NS;
--		C <="001";		
--		WAIT FOR 100 NS; 
--		C <="001"; 		
--		WAIT FOR 100 NS; 
--		C <="010";
--		WAIT FOR 100 NS; 
--		C <="001";		
--		WAIT FOR 100 NS;
--		C <= "000";
--		WAIT FOR 200 NS;
--		P <= "00";
--		RESET <= '1';

--		-- 1 + 0.5 + 2 .. REMAINDER = 1
--		WAIT FOR 25 NS; 
--		S <= '1';
--		WAIT FOR 20 NS;
--		P <="10";
--		WAIT FOR 30 NS;
--		S <= '0';
--		WAIT FOR 150 NS;
--		C <="010";		
--		WAIT FOR 100 NS; 
--		C <="001"; 		
--		WAIT FOR 100 NS; 
--		C <="100";	
--		WAIT FOR 100 NS;
--		C <= "000";
--		WAIT FOR 200 NS;
--		P <= "00";
--		RESET <= '1';

--		-- 2 + 2 .. REMAINDER = 1.5
--		WAIT FOR 25 NS; 
--		S <= '1';
--		WAIT FOR 20 NS;
--		P <="10";
--		WAIT FOR 30 NS;
--		S <= '0';
--		WAIT FOR 150 NS;
--		C <="100";		
--		WAIT FOR 100 NS; 
--		C <="100"; 			
--		WAIT FOR 100 NS;
--		C <= "000";
--		WAIT FOR 200 NS;
--		P <= "00";
--		RESET <= '1';
		
	WAIT;
   END PROCESS;
END;
