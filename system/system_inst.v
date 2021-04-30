	system u0 (
		.clk_clk                (<connected-to-clk_clk>),                //             clk.clk
		.hour_1_export          (<connected-to-hour_1_export>),          //          hour_1.export
		.hour_2_export          (<connected-to-hour_2_export>),          //          hour_2.export
		.inc_hour_button_export (<connected-to-inc_hour_button_export>), // inc_hour_button.export
		.inc_min_button_export  (<connected-to-inc_min_button_export>),  //  inc_min_button.export
		.confirm_button_export  (<connected-to-confirm_button_export>),  //  confirm_button.export
		.leds_export            (<connected-to-leds_export>),            //            leds.export
		.min_1_export           (<connected-to-min_1_export>),           //           min_1.export
		.min_2_export           (<connected-to-min_2_export>),           //           min_2.export
		.reset_reset_n          (<connected-to-reset_reset_n>),          //           reset.reset_n
		.sec_1_export           (<connected-to-sec_1_export>),           //           sec_1.export
		.sec_2_export           (<connected-to-sec_2_export>),           //           sec_2.export
		.set_mode_button_export (<connected-to-set_mode_button_export>)  // set_mode_button.export
	);

