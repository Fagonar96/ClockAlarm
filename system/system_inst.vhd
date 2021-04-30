	component system is
		port (
			clk_clk                : in  std_logic                    := 'X'; -- clk
			hour_1_export          : out std_logic_vector(7 downto 0);        -- export
			hour_2_export          : out std_logic_vector(7 downto 0);        -- export
			inc_hour_button_export : in  std_logic                    := 'X'; -- export
			inc_min_button_export  : in  std_logic                    := 'X'; -- export
			confirm_button_export  : in  std_logic                    := 'X'; -- export
			leds_export            : out std_logic_vector(7 downto 0);        -- export
			min_1_export           : out std_logic_vector(7 downto 0);        -- export
			min_2_export           : out std_logic_vector(7 downto 0);        -- export
			reset_reset_n          : in  std_logic                    := 'X'; -- reset_n
			sec_1_export           : out std_logic_vector(7 downto 0);        -- export
			sec_2_export           : out std_logic_vector(7 downto 0);        -- export
			set_mode_button_export : in  std_logic                    := 'X'  -- export
		);
	end component system;

	u0 : component system
		port map (
			clk_clk                => CONNECTED_TO_clk_clk,                --             clk.clk
			hour_1_export          => CONNECTED_TO_hour_1_export,          --          hour_1.export
			hour_2_export          => CONNECTED_TO_hour_2_export,          --          hour_2.export
			inc_hour_button_export => CONNECTED_TO_inc_hour_button_export, -- inc_hour_button.export
			inc_min_button_export  => CONNECTED_TO_inc_min_button_export,  --  inc_min_button.export
			confirm_button_export  => CONNECTED_TO_confirm_button_export,  --  confirm_button.export
			leds_export            => CONNECTED_TO_leds_export,            --            leds.export
			min_1_export           => CONNECTED_TO_min_1_export,           --           min_1.export
			min_2_export           => CONNECTED_TO_min_2_export,           --           min_2.export
			reset_reset_n          => CONNECTED_TO_reset_reset_n,          --           reset.reset_n
			sec_1_export           => CONNECTED_TO_sec_1_export,           --           sec_1.export
			sec_2_export           => CONNECTED_TO_sec_2_export,           --           sec_2.export
			set_mode_button_export => CONNECTED_TO_set_mode_button_export  -- set_mode_button.export
		);

