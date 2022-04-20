#ifndef __TERM_H__
#define __TERM_H__

/*
UNG's Not GNU

MIT License

Copyright (c) 2011-2020 Jakob Kaivo <jkk@ung.org>

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#if defined _XOPEN_SOURCE && _XOPEN_SOURCE - 1 < 0
#undef _XOPEN_SOURCE
#define _XOPEN_SOURCE 400
#endif

#if !defined __STDC_VERSION__ || __STDC_VERSION__ < 19901L
#	if (defined _POSIX_C_SOURCE && _POSIX_C_SOURCE >= 200112L)
#		error POSIX.1-2001 and later require a C99 compiler
#	elif (defined _XOPEN_SOURCE && _XOPEN_SOURCE >= 600)
#		error XOPEN Issue 6 and later require a C99 compiler
#	endif
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/term/acs_chars.c */
#define acs_chars tigetstr("acsc")
/* ./src/term/alt_scancode_esc.c */
#define alt_scancode_esc tigetstr("scesa")
/* ./src/term/auto_left_margin.c */
#define auto_left_margin tigetflag("bw")
/* ./src/term/auto_right_margin.c */
#define auto_right_margin tigetflag("am")
/* ./src/term/back_color_erase.c */
#define back_color_erase tigetflag("bce")
/* ./src/term/back_tab.c */
#define back_tab tigetstr("cbt")
/* ./src/term/bell.c */
#define bell tigetstr("bel")
/* ./src/term/bit_image_carriage_return.c */
#define bit_image_carriage_return tigetstr("bicr")
/* ./src/term/bit_image_entwining.c */
#define bit_image_entwining tigetnum("bitwin")
/* ./src/term/bit_image_newline.c */
#define bit_image_newline tigetstr("binel")
/* ./src/term/bit_image_repeat.c */
#define bit_image_repeat tigetstr("birep")
/* ./src/term/bit_image_type.c */
#define bit_image_type tigetnum("bitype")
/* ./src/term/buffer_capacity.c */
#define buffer_capacity tigetnum("bufsz")
/* ./src/term/buttons.c */
#define buttons tigetnum("btns")
/* ./src/term/can_change.c */
#define can_change tigetflag("ccc")
/* ./src/term/carriage_return.c */
#define carriage_return tigetstr("cr")
/* ./src/term/ceol_standout_glitch.c */
#define ceol_standout_glitch tigetflag("xhp")
/* ./src/term/change_char_pitch.c */
#define change_char_pitch tigetstr("cpi")
/* ./src/term/change_line_pitch.c */
#define change_line_pitch tigetstr("lpi")
/* ./src/term/change_res_horz.c */
#define change_res_horz tigetstr("chr")
/* ./src/term/change_res_vert.c */
#define change_res_vert tigetstr("cvr")
/* ./src/term/change_scroll_region.c */
#define change_scroll_region tigetstr("csr")
/* ./src/term/char_padding.c */
#define char_padding tigetstr("rmp")
/* ./src/term/char_set_names.c */
#define char_set_names tigetstr("csnm")
/* ./src/term/clear_all_tabs.c */
#define clear_all_tabs tigetstr("tbc")
/* ./src/term/clear_margins.c */
#define clear_margins tigetstr("mgc")
/* ./src/term/clear_screen.c */
#define clear_screen tigetstr("clear")
/* ./src/term/clr_bol.c */
#define clr_bol tigetstr("el1")
/* ./src/term/clr_eol.c */
#define clr_eol tigetstr("el")
/* ./src/term/clr_eos.c */
#define clr_eos tigetstr("el")
/* ./src/term/code_set_init.c */
#define code_set_init tigetstr("csin")
/* ./src/term/col_addr_glitch.c */
#define col_addr_glitch tigetflag("xhpa")
/* ./src/term/color_names.c */
#define color_names tigetstr("colornm")
/* ./src/term/column_address.c */
#define column_address tigetstr("hpa")
/* ./src/term/columns.c */
#define columns tigetnum("cols")
/* ./src/term/command_character.c */
#define command_character tigetstr("cmdch")
/* ./src/term/cpi_change_res.c */
#define cpi_change_res tigetflag("cpix")
/* ./src/term/cr_cancles_micro_mode.c */
#define cr_cancles_micro_mode tigetflag("crxm")
/* ./src/term/create_window.c */
#define create_window tigetstr("cwin")
/* ./src/term/cursor_address.c */
#define cursor_address tigetstr("cup")
/* ./src/term/cursor_down.c */
#define cursor_down tigetstr("cudl")
/* ./src/term/cursor_home.c */
#define cursor_home tigetstr("home")
/* ./src/term/cursor_invisible.c */
#define cursor_invisible tigetstr("civis")
/* ./src/term/cursor_left.c */
#define cursor_left tigetstr("cubl")
/* ./src/term/cursor_mem_address.c */
#define cursor_mem_address tigetstr("mrcup")
/* ./src/term/cursor_normal.c */
#define cursor_normal tigetstr("cnorm")
/* ./src/term/cursor_right.c */
#define cursor_right tigetstr("cufl")
/* ./src/term/cursor_to_ll.c */
#define cursor_to_ll tigetstr("ll")
/* ./src/term/cursor_up.c */
#define cursor_up tigetstr("cuul")
/* ./src/term/cursor_visible.c */
#define cursor_visible tigetstr("cvvis")
/* ./src/term/define_bit_image_region.c */
#define define_bit_image_region tigetstr("defbi")
/* ./src/term/define_char.c */
#define define_char tigetstr("defc")
/* ./src/term/delete_character.c */
#define delete_character tigetstr("dchl")
/* ./src/term/delete_line.c */
#define delete_line tigetstr("dll")
/* ./src/term/dest_tabs_magic_smso.c */
#define dest_tabs_magic_smso tigetflag("xt")
/* ./src/term/device_type.c */
#define device_type tigetstr("devt")
/* ./src/term/dial_phone.c */
#define dial_phone tigetstr("dial")
/* ./src/term/dis_status_line.c */
#define dis_status_line tigetstr("dsl")
/* ./src/term/display_clock.c */
#define display_clock tigetstr("dclk")
/* ./src/term/display_pc_char.c */
#define display_pc_char tigetstr("dispc")
/* ./src/term/dot_horz_spacing.c */
#define dot_horz_spacing tigetnum("spinh")
/* ./src/term/dot_vert_spacing.c */
#define dot_vert_spacing tigetnum("spinv")
/* ./src/term/down_half_line.c */
#define down_half_line tigetstr("hd")
/* ./src/term/eat_newline_glitch.c */
#define eat_newline_glitch tigetflag("xenl")
/* ./src/term/ena_acs.c */
#define ena_acs tigetstr("enacs")
/* ./src/term/end_bit_image_region.c */
#define end_bit_image_region tigetstr("endbi")
/* ./src/term/enter_alt_charset_mode.c */
#define enter_alt_charset_mode tigetstr("smacs")
/* ./src/term/enter_am_mode.c */
#define enter_am_mode tigetstr("smam")
/* ./src/term/enter_blink_mode.c */
#define enter_blink_mode tigetstr("blink")
/* ./src/term/enter_bold_mode.c */
#define enter_bold_mode tigetstr("bold")
/* ./src/term/enter_ca_mode.c */
#define enter_ca_mode tigetstr("smcup")
/* ./src/term/enter_delete_mode.c */
#define enter_delete_mode tigetstr("smdc")
/* ./src/term/enter_dim_mode.c */
#define enter_dim_mode tigetstr("dim")
/* ./src/term/enter_doublewide_mode.c */
#define enter_doublewide_mode tigetstr("swidm")
/* ./src/term/enter_draft_quality.c */
#define enter_draft_quality tigetstr("sdrfq")
/* ./src/term/enter_horizontal_hl_mode.c */
#define enter_horizontal_hl_mode tigetstr("ehhlm")
/* ./src/term/enter_insert_mode.c */
#define enter_insert_mode tigetstr("smir")
/* ./src/term/enter_italics_mode.c */
#define enter_italics_mode tigetstr("sitm")
/* ./src/term/enter_left_hl_mode.c */
#define enter_left_hl_mode tigetstr("elhlm")
/* ./src/term/enter_leftward_mode.c */
#define enter_leftward_mode tigetstr("slm")
/* ./src/term/enter_low_hl_mode.c */
#define enter_low_hl_mode tigetstr("elohlm")
/* ./src/term/enter_micro_code.c */
#define enter_micro_code tigetstr("smicm")
/* ./src/term/enter_near_letter_quality.c */
#define enter_near_letter_quality tigetstr("snlq")
/* ./src/term/enter_normal_quality.c */
#define enter_normal_quality tigetstr("snrmq")
/* ./src/term/enter_pc_charset_mode.c */
#define enter_pc_charset_mode tigetstr("smpch")
/* ./src/term/enter_protected_mode.c */
#define enter_protected_mode tigetstr("prot")
/* ./src/term/enter_reverse_mode.c */
#define enter_reverse_mode tigetstr("rev")
/* ./src/term/enter_right_hl_mode.c */
#define enter_right_hl_mode tigetstr("erhlm")
/* ./src/term/enter_scancode_mode.c */
#define enter_scancode_mode tigetstr("smsc")
/* ./src/term/enter_secure_mode.c */
#define enter_secure_mode tigetstr("invis")
/* ./src/term/enter_shadow_mode.c */
#define enter_shadow_mode tigetstr("sshm")
/* ./src/term/enter_standout_mode.c */
#define enter_standout_mode tigetstr("smso")
/* ./src/term/enter_subscript_mode.c */
#define enter_subscript_mode tigetstr("ssubm")
/* ./src/term/enter_superscript_mode.c */
#define enter_superscript_mode tigetstr("ssupm")
/* ./src/term/enter_top_hl_mode.c */
#define enter_top_hl_mode tigetstr("ethlm")
/* ./src/term/enter_underline_mode.c */
#define enter_underline_mode tigetstr("smul")
/* ./src/term/enter_upward_mode.c */
#define enter_upward_mode tigetstr("sum")
/* ./src/term/enter_vertical_hl_mode.c */
#define enter_vertical_hl_mode tigetstr("evhlm")
/* ./src/term/enter_xon_mode.c */
#define enter_xon_mode tigetstr("smxon")
/* ./src/term/erase_chars.c */
#define erase_chars tigetstr("ech")
/* ./src/term/erase_overstrick.c */
#define erase_overstrick tigetflag("eo")
/* ./src/term/exit_alt_charset_mode.c */
#define exit_alt_charset_mode tigetstr("rmacs")
/* ./src/term/exit_am_mode.c */
#define exit_am_mode tigetstr("rmam")
/* ./src/term/exit_attribute_mode.c */
#define exit_attribute_mode tigetstr("sgr0")
/* ./src/term/exit_ca_mode.c */
#define exit_ca_mode tigetstr("rmcup")
/* ./src/term/exit_delete_mode.c */
#define exit_delete_mode tigetstr("rmdc")
/* ./src/term/exit_doublewide_mode.c */
#define exit_doublewide_mode tigetstr("rwidm")
/* ./src/term/exit_insert_mode.c */
#define exit_insert_mode tigetstr("rmir")
/* ./src/term/exit_italics_mode.c */
#define exit_italics_mode tigetstr("ritm")
/* ./src/term/exit_leftword_mode.c */
#define exit_leftword_mode tigetstr("rlim")
/* ./src/term/exit_micro_mode.c */
#define exit_micro_mode tigetstr("rmicm")
/* ./src/term/exit_pc_charset_mode.c */
#define exit_pc_charset_mode tigetstr("rmpch")
/* ./src/term/exit_scancode_mode.c */
#define exit_scancode_mode tigetstr("rmcs")
/* ./src/term/exit_shadow_mode.c */
#define exit_shadow_mode tigetstr("rshm")
/* ./src/term/exit_standout_mode.c */
#define exit_standout_mode tigetstr("rmso")
/* ./src/term/exit_subscript_mode.c */
#define exit_subscript_mode tigetstr("rsubm")
/* ./src/term/exit_superscript_mode.c */
#define exit_superscript_mode tigetstr("rsupm")
/* ./src/term/exit_underline_mode.c */
#define exit_underline_mode tigetstr("rmul")
/* ./src/term/exit_upward_mode.c */
#define exit_upward_mode tigetstr("rum")
/* ./src/term/exit_xon_mode.c */
#define exit_xon_mode tigetstr("rmxon")
/* ./src/term/fixed_pause.c */
#define fixed_pause tigetstr("pause")
/* ./src/term/flash_hook.c */
#define flash_hook tigetstr("hook")
/* ./src/term/flash_screen.c */
#define flash_screen tigetstr("flash")
/* ./src/term/form_feed.c */
#define form_feed tigetstr("ff")
/* ./src/term/from_status_line.c */
#define from_status_line tigetstr("fsl")
/* ./src/term/generic_type.c */
#define generic_type tigetflag("gn")
/* ./src/term/get_mouse.c */
#define get_mouse tigetstr("getm")
/* ./src/term/goto_window.c */
#define goto_window tigetstr("wingo")
/* ./src/term/hangup.c */
#define hangup tigetstr("hup")
/* ./src/term/hard_copy.c */
#define hard_copy tigetflag("hc")
/* ./src/term/hard_cursor.c */
#define hard_cursor tigetflag("chts")
/* ./src/term/has_meta_key.c */
#define has_meta_key tigetflag("km")
/* ./src/term/has_print_wheel.c */
#define has_print_wheel tigetflag("daisy")
/* ./src/term/has_status_line.c */
#define has_status_line tigetflag("hs")
/* ./src/term/hue_lightness_saturation.c */
#define hue_lightness_saturation tigetflag("hls")
/* ./src/term/init_1string.c */
#define init_1string tigetstr("is1")
/* ./src/term/init_2string.c */
#define init_2string tigetstr("is2")
/* ./src/term/init_3string.c */
#define init_3string tigetstr("is3")
/* ./src/term/init_file.c */
#define init_file tigetstr("if")
/* ./src/term/init_prog.c */
#define init_prog tigetstr("iprog")
/* ./src/term/init_tabs.c */
#define init_tabs tigetnum("it")
/* ./src/term/initialize_color.c */
#define initialize_color tigetstr("initc")
/* ./src/term/initialize_pair.c */
#define initialize_pair tigetstr("initp")
/* ./src/term/insert_character.c */
#define insert_character tigetstr("ichl")
/* ./src/term/insert_line.c */
#define insert_line tigetstr("ill")
/* ./src/term/insert_null_glitch.c */
#define insert_null_glitch tigetflag("in")
/* ./src/term/insert_padding.c */
#define insert_padding tigetstr("ip")
/* ./src/term/key_a1.c */
#define key_a1 tigetstr("ka1")
/* ./src/term/key_a3.c */
#define key_a3 tigetstr("ka3")
/* ./src/term/key_b2.c */
#define key_b2 tigetstr("kb2")
/* ./src/term/key_backspace.c */
#define key_backspace tigetstr("kbs")
/* ./src/term/key_beg.c */
#define key_beg tigetstr("kbeg")
/* ./src/term/key_btab.c */
#define key_btab tigetstr("kcbt")
/* ./src/term/key_c1.c */
#define key_c1 tigetstr("kc1")
/* ./src/term/key_c3.c */
#define key_c3 tigetstr("kc3")
/* ./src/term/key_cancel.c */
#define key_cancel tigetstr("kcan")
/* ./src/term/key_catab.c */
#define key_catab tigetstr("ktbc")
/* ./src/term/key_clear.c */
#define key_clear tigetstr("kclr")
/* ./src/term/key_close.c */
#define key_close tigetstr("kclo")
/* ./src/term/key_command.c */
#define key_command tigetstr("kcmd")
/* ./src/term/key_copy.c */
#define key_copy tigetstr("kcpy")
/* ./src/term/key_create.c */
#define key_create tigetstr("kcrt")
/* ./src/term/key_ctab.c */
#define key_ctab tigetstr("kctab")
/* ./src/term/key_dc.c */
#define key_dc tigetstr("kdchl")
/* ./src/term/key_dl.c */
#define key_dl tigetstr("kdll")
/* ./src/term/key_down.c */
#define key_down tigetstr("kcudl")
/* ./src/term/key_eic.c */
#define key_eic tigetstr("krmir")
/* ./src/term/key_end.c */
#define key_end tigetstr("kend")
/* ./src/term/key_enter.c */
#define key_enter tigetstr("kent")
/* ./src/term/key_eol.c */
#define key_eol tigetstr("kel")
/* ./src/term/key_eos.c */
#define key_eos tigetstr("ked")
/* ./src/term/key_exit.c */
#define key_exit tigetstr("kext")
/* ./src/term/key_f0.c */
#define key_f0 tigetstr("kf0")
/* ./src/term/key_f1.c */
#define key_f1 tigetstr("kf1")
/* ./src/term/key_f10.c */
#define key_f10 tigetstr("kf10")
/* ./src/term/key_f11.c */
#define key_f11 tigetstr("kf11")
/* ./src/term/key_f12.c */
#define key_f12 tigetstr("kf12")
/* ./src/term/key_f13.c */
#define key_f13 tigetstr("kf13")
/* ./src/term/key_f14.c */
#define key_f14 tigetstr("kf14")
/* ./src/term/key_f15.c */
#define key_f15 tigetstr("kf15")
/* ./src/term/key_f16.c */
#define key_f16 tigetstr("kf16")
/* ./src/term/key_f17.c */
#define key_f17 tigetstr("kf17")
/* ./src/term/key_f18.c */
#define key_f18 tigetstr("kf18")
/* ./src/term/key_f19.c */
#define key_f19 tigetstr("kf19")
/* ./src/term/key_f2.c */
#define key_f2 tigetstr("kf2")
/* ./src/term/key_f20.c */
#define key_f20 tigetstr("kf20")
/* ./src/term/key_f21.c */
#define key_f21 tigetstr("kf21")
/* ./src/term/key_f22.c */
#define key_f22 tigetstr("kf22")
/* ./src/term/key_f23.c */
#define key_f23 tigetstr("kf23")
/* ./src/term/key_f24.c */
#define key_f24 tigetstr("kf24")
/* ./src/term/key_f25.c */
#define key_f25 tigetstr("kf25")
/* ./src/term/key_f26.c */
#define key_f26 tigetstr("kf26")
/* ./src/term/key_f27.c */
#define key_f27 tigetstr("kf27")
/* ./src/term/key_f28.c */
#define key_f28 tigetstr("kf28")
/* ./src/term/key_f29.c */
#define key_f29 tigetstr("kf29")
/* ./src/term/key_f3.c */
#define key_f3 tigetstr("kf3")
/* ./src/term/key_f30.c */
#define key_f30 tigetstr("kf30")
/* ./src/term/key_f31.c */
#define key_f31 tigetstr("kf31")
/* ./src/term/key_f32.c */
#define key_f32 tigetstr("kf32")
/* ./src/term/key_f33.c */
#define key_f33 tigetstr("kf33")
/* ./src/term/key_f34.c */
#define key_f34 tigetstr("kf34")
/* ./src/term/key_f35.c */
#define key_f35 tigetstr("kf35")
/* ./src/term/key_f36.c */
#define key_f36 tigetstr("kf36")
/* ./src/term/key_f37.c */
#define key_f37 tigetstr("kf37")
/* ./src/term/key_f38.c */
#define key_f38 tigetstr("kf38")
/* ./src/term/key_f39.c */
#define key_f39 tigetstr("kf39")
/* ./src/term/key_f4.c */
#define key_f4 tigetstr("kf4")
/* ./src/term/key_f40.c */
#define key_f40 tigetstr("kf40")
/* ./src/term/key_f41.c */
#define key_f41 tigetstr("kf41")
/* ./src/term/key_f42.c */
#define key_f42 tigetstr("kf42")
/* ./src/term/key_f43.c */
#define key_f43 tigetstr("kf43")
/* ./src/term/key_f44.c */
#define key_f44 tigetstr("kf44")
/* ./src/term/key_f45.c */
#define key_f45 tigetstr("kf45")
/* ./src/term/key_f46.c */
#define key_f46 tigetstr("kf46")
/* ./src/term/key_f47.c */
#define key_f47 tigetstr("kf47")
/* ./src/term/key_f48.c */
#define key_f48 tigetstr("kf48")
/* ./src/term/key_f49.c */
#define key_f49 tigetstr("kf49")
/* ./src/term/key_f5.c */
#define key_f5 tigetstr("kf5")
/* ./src/term/key_f50.c */
#define key_f50 tigetstr("kf50")
/* ./src/term/key_f51.c */
#define key_f51 tigetstr("kf51")
/* ./src/term/key_f52.c */
#define key_f52 tigetstr("kf52")
/* ./src/term/key_f53.c */
#define key_f53 tigetstr("kf53")
/* ./src/term/key_f54.c */
#define key_f54 tigetstr("kf54")
/* ./src/term/key_f55.c */
#define key_f55 tigetstr("kf55")
/* ./src/term/key_f56.c */
#define key_f56 tigetstr("kf56")
/* ./src/term/key_f57.c */
#define key_f57 tigetstr("kf57")
/* ./src/term/key_f58.c */
#define key_f58 tigetstr("kf58")
/* ./src/term/key_f59.c */
#define key_f59 tigetstr("kf59")
/* ./src/term/key_f6.c */
#define key_f6 tigetstr("kf6")
/* ./src/term/key_f60.c */
#define key_f60 tigetstr("kf60")
/* ./src/term/key_f61.c */
#define key_f61 tigetstr("kf61")
/* ./src/term/key_f62.c */
#define key_f62 tigetstr("kf62")
/* ./src/term/key_f63.c */
#define key_f63 tigetstr("kf63")
/* ./src/term/key_f7.c */
#define key_f7 tigetstr("kf7")
/* ./src/term/key_f8.c */
#define key_f8 tigetstr("kf8")
/* ./src/term/key_f9.c */
#define key_f9 tigetstr("kf9")
/* ./src/term/key_find.c */
#define key_find tigetstr("kfnd")
/* ./src/term/key_help.c */
#define key_help tigetstr("khlp")
/* ./src/term/key_home.c */
#define key_home tigetstr("khome")
/* ./src/term/key_ic.c */
#define key_ic tigetstr("kichl")
/* ./src/term/key_il.c */
#define key_il tigetstr("kill")
/* ./src/term/key_left.c */
#define key_left tigetstr("kcubl")
/* ./src/term/key_ll.c */
#define key_ll tigetstr("kll")
/* ./src/term/key_mark.c */
#define key_mark tigetstr("kmrk")
/* ./src/term/key_message.c */
#define key_message tigetstr("kmsg")
/* ./src/term/key_mouse.c */
#define key_mouse tigetstr("kmous")
/* ./src/term/key_move.c */
#define key_move tigetstr("kmov")
/* ./src/term/key_next.c */
#define key_next tigetstr("knxt")
/* ./src/term/key_npage.c */
#define key_npage tigetstr("knp")
/* ./src/term/key_open.c */
#define key_open tigetstr("kopn")
/* ./src/term/key_options.c */
#define key_options tigetstr("kopt")
/* ./src/term/key_ppage.c */
#define key_ppage tigetstr("kpp")
/* ./src/term/key_previous.c */
#define key_previous tigetstr("kprv")
/* ./src/term/key_print.c */
#define key_print tigetstr("kprt")
/* ./src/term/key_redo.c */
#define key_redo tigetstr("krdo")
/* ./src/term/key_reference.c */
#define key_reference tigetstr("kref")
/* ./src/term/key_refresh.c */
#define key_refresh tigetstr("krfr")
/* ./src/term/key_replace.c */
#define key_replace tigetstr("krpl")
/* ./src/term/key_restart.c */
#define key_restart tigetstr("krst")
/* ./src/term/key_resume.c */
#define key_resume tigetstr("kres")
/* ./src/term/key_right.c */
#define key_right tigetstr("kcufl")
/* ./src/term/key_save.c */
#define key_save tigetstr("ksav")
/* ./src/term/key_sbeg.c */
#define key_sbeg tigetstr("kBEG")
/* ./src/term/key_scancel.c */
#define key_scancel tigetstr("kCAN")
/* ./src/term/key_scommand.c */
#define key_scommand tigetstr("kCMD")
/* ./src/term/key_scopy.c */
#define key_scopy tigetstr("kCPY")
/* ./src/term/key_screate.c */
#define key_screate tigetstr("kCRT")
/* ./src/term/key_sdc.c */
#define key_sdc tigetstr("kDC")
/* ./src/term/key_sdl.c */
#define key_sdl tigetstr("kDL")
/* ./src/term/key_select.c */
#define key_select tigetstr("kslt")
/* ./src/term/key_send.c */
#define key_send tigetstr("kEND")
/* ./src/term/key_seol.c */
#define key_seol tigetstr("kEOL")
/* ./src/term/key_sexit.c */
#define key_sexit tigetstr("kEXT")
/* ./src/term/key_sf.c */
#define key_sf tigetstr("kind")
/* ./src/term/key_sfind.c */
#define key_sfind tigetstr("kFND")
/* ./src/term/key_shelp.c */
#define key_shelp tigetstr("kHLP")
/* ./src/term/key_shome.c */
#define key_shome tigetstr("kHOM")
/* ./src/term/key_sic.c */
#define key_sic tigetstr("iIC")
/* ./src/term/key_sleft.c */
#define key_sleft tigetstr("kLFT")
/* ./src/term/key_smessage.c */
#define key_smessage tigetstr("kMSG")
/* ./src/term/key_smove.c */
#define key_smove tigetstr("kMOV")
/* ./src/term/key_snext.c */
#define key_snext tigetstr("kNXT")
/* ./src/term/key_soptions.c */
#define key_soptions tigetstr("kOPT")
/* ./src/term/key_sprevious.c */
#define key_sprevious tigetstr("kPRV")
/* ./src/term/key_sprint.c */
#define key_sprint tigetstr("kPRT")
/* ./src/term/key_sr.c */
#define key_sr tigetstr("kri")
/* ./src/term/key_sredo.c */
#define key_sredo tigetstr("kRDO")
/* ./src/term/key_sreplace.c */
#define key_sreplace tigetstr("kRPL")
/* ./src/term/key_sright.c */
#define key_sright tigetstr("kRIT")
/* ./src/term/key_srsume.c */
#define key_srsume tigetstr("kRES")
/* ./src/term/key_ssave.c */
#define key_ssave tigetstr("kSAV")
/* ./src/term/key_ssuspend.c */
#define key_ssuspend tigetstr("kSPD")
/* ./src/term/key_stab.c */
#define key_stab tigetstr("khts")
/* ./src/term/key_sundo.c */
#define key_sundo tigetstr("sUND")
/* ./src/term/key_suspend.c */
#define key_suspend tigetstr("kspd")
/* ./src/term/key_undo.c */
#define key_undo tigetstr("kund")
/* ./src/term/key_up.c */
#define key_up tigetstr("kcuul")
/* ./src/term/keypad_local.c */
#define keypad_local tigetstr("rmkx")
/* ./src/term/keypad_xmit.c */
#define keypad_xmit tigetstr("smkx")
/* ./src/term/lab_f0.c */
#define lab_f0 tigetstr("lf0")
/* ./src/term/lab_f1.c */
#define lab_f1 tigetstr("lf1")
/* ./src/term/lab_f10.c */
#define lab_f10 tigetstr("lf10")
/* ./src/term/lab_f2.c */
#define lab_f2 tigetstr("lf2")
/* ./src/term/lab_f3.c */
#define lab_f3 tigetstr("lf3")
/* ./src/term/lab_f4.c */
#define lab_f4 tigetstr("lf4")
/* ./src/term/lab_f5.c */
#define lab_f5 tigetstr("lf5")
/* ./src/term/lab_f6.c */
#define lab_f6 tigetstr("lf6")
/* ./src/term/lab_f7.c */
#define lab_f7 tigetstr("lf7")
/* ./src/term/lab_f8.c */
#define lab_f8 tigetstr("lf8")
/* ./src/term/lab_f9.c */
#define lab_f9 tigetstr("lf9")
/* ./src/term/label_format.c */
#define label_format tigetstr("fln")
/* ./src/term/label_height.c */
#define label_height tigetnum("lh")
/* ./src/term/label_off.c */
#define label_off tigetstr("rmln")
/* ./src/term/label_on.c */
#define label_on tigetstr("smln")
/* ./src/term/label_width.c */
#define label_width tigetnum("lw")
/* ./src/term/lines.c */
#define lines tigetnum("lines")
/* ./src/term/lines_of_memory.c */
#define lines_of_memory tigetnum("lm")
/* ./src/term/lpi_changes_res.c */
#define lpi_changes_res tigetflag("lpix")
/* ./src/term/magic_cookie_glitch.c */
#define magic_cookie_glitch tigetnum("xmc")
/* ./src/term/max_attributes.c */
#define max_attributes tigetnum("ma")
/* ./src/term/max_colors.c */
#define max_colors tigetnum("colors")
/* ./src/term/max_micro_address.c */
#define max_micro_address tigetnum("maddr")
/* ./src/term/max_micro_jump.c */
#define max_micro_jump tigetnum("mjump")
/* ./src/term/max_pairs.c */
#define max_pairs tigetnum("pairs")
/* ./src/term/maximum_windows.c */
#define maximum_windows tigetnum("wnum")
/* ./src/term/memory_above.c */
#define memory_above tigetflag("da")
/* ./src/term/memory_below.c */
#define memory_below tigetflag("db")
/* ./src/term/meta_off.c */
#define meta_off tigetstr("rmm")
/* ./src/term/meta_on.c */
#define meta_on tigetstr("smm")
/* ./src/term/micro_col_size.c */
#define micro_col_size tigetnum("mcs")
/* ./src/term/micro_colum_address.c */
#define micro_colum_address tigetstr("mhpa")
/* ./src/term/micro_down.c */
#define micro_down tigetstr("mcudl")
/* ./src/term/micro_left.c */
#define micro_left tigetstr("mcubl")
/* ./src/term/micro_line_size.c */
#define micro_line_size tigetnum("mls")
/* ./src/term/micro_right.c */
#define micro_right tigetstr("mcufl")
/* ./src/term/micro_row_address.c */
#define micro_row_address tigetstr("mvpa")
/* ./src/term/micro_up.c */
#define micro_up tigetstr("mcuul")
/* ./src/term/mouse_info.c */
#define mouse_info tigetstr("minfo")
/* ./src/term/move_insert_mode.c */
#define move_insert_mode tigetflag("mir")
/* ./src/term/move_standout_mode.c */
#define move_standout_mode tigetflag("msgr")
/* ./src/term/needs_xon_xoff.c */
#define needs_xon_xoff tigetflag("nxon")
/* ./src/term/newline.c */
#define newline tigetstr("nel")
/* ./src/term/no_color_video.c */
#define no_color_video tigetnum("ncv")
/* ./src/term/no_esc_ctlc.c */
#define no_esc_ctlc tigetflag("xsb")
/* ./src/term/no_pad_char.c */
#define no_pad_char tigetflag("npc")
/* ./src/term/non_dest_scroll_region.c */
#define non_dest_scroll_region tigetflag("ndscr")
/* ./src/term/non_rev_rmcup.c */
#define non_rev_rmcup tigetflag("nrrmc")
/* ./src/term/num_labels.c */
#define num_labels tigetnum("nlab")
/* ./src/term/number_of_pins.c */
#define number_of_pins tigetnum("npins")
/* ./src/term/order_of_pins.c */
#define order_of_pins tigetstr("porder")
/* ./src/term/orig_colors.c */
#define orig_colors tigetstr("oc")
/* ./src/term/orig_pair.c */
#define orig_pair tigetstr("op")
/* ./src/term/output_res_char.c */
#define output_res_char tigetnum("orc")
/* ./src/term/output_res_horz_inch.c */
#define output_res_horz_inch tigetnum("orhi")
/* ./src/term/output_res_line.c */
#define output_res_line tigetnum("orl")
/* ./src/term/output_res_vert_inch.c */
#define output_res_vert_inch tigetnum("orvi")
/* ./src/term/over_strike.c */
#define over_strike tigetflag("os")
/* ./src/term/pad_char.c */
#define pad_char tigetstr("pad")
/* ./src/term/padding_baud_rate.c */
#define padding_baud_rate tigetnum("pb")
/* ./src/term/parm_dch.c */
#define parm_dch tigetstr("dch")
/* ./src/term/parm_delete_line.c */
#define parm_delete_line tigetstr("dl")
/* ./src/term/parm_down_cursor.c */
#define parm_down_cursor tigetstr("cud")
/* ./src/term/parm_down_micro.c */
#define parm_down_micro tigetstr("mcud")
/* ./src/term/parm_ich.c */
#define parm_ich tigetstr("ich")
/* ./src/term/parm_index.c */
#define parm_index tigetstr("indn")
/* ./src/term/parm_insert_line.c */
#define parm_insert_line tigetstr("il")
/* ./src/term/parm_left_cursor.c */
#define parm_left_cursor tigetstr("cub")
/* ./src/term/parm_left_micro.c */
#define parm_left_micro tigetstr("mcub")
/* ./src/term/parm_right_cursor.c */
#define parm_right_cursor tigetstr("cuf")
/* ./src/term/parm_right_micro.c */
#define parm_right_micro tigetstr("mcuf")
/* ./src/term/parm_rindex.c */
#define parm_rindex tigetstr("rin")
/* ./src/term/parm_up_cursor.c */
#define parm_up_cursor tigetstr("cuu")
/* ./src/term/parm_up_micro.c */
#define parm_up_micro tigetstr("mcuu")
/* ./src/term/pc_term_options.c */
#define pc_term_options tigetstr("pctrm")
/* ./src/term/pkey_key.c */
#define pkey_key tigetstr("pfkey")
/* ./src/term/pkey_local.c */
#define pkey_local tigetstr("pfloc")
/* ./src/term/pkey_plab.c */
#define pkey_plab tigetstr("pfxl")
/* ./src/term/pkey_xmit.c */
#define pkey_xmit tigetstr("pfx")
/* ./src/term/plab_norm.c */
#define plab_norm tigetstr("pln")
/* ./src/term/print_rate.c */
#define print_rate tigetnum("cps")
/* ./src/term/print_screen.c */
#define print_screen tigetstr("mc0")
/* ./src/term/prtr_non.c */
#define prtr_non tigetstr("mc5p")
/* ./src/term/prtr_off.c */
#define prtr_off tigetstr("mc4")
/* ./src/term/prtr_on.c */
#define prtr_on tigetstr("mc5")
/* ./src/term/prtr_silent.c */
#define prtr_silent tigetflag("mc5i")
/* ./src/term/pulse.c */
#define pulse tigetstr("pulse")
/* ./src/term/quick_dial.c */
#define quick_dial tigetstr("qdial")
/* ./src/term/remove_clock.c */
#define remove_clock tigetstr("rmclk")
/* ./src/term/repeat_char.c */
#define repeat_char tigetstr("rep")
/* ./src/term/req_for_input.c */
#define req_for_input tigetstr("rfi")
/* ./src/term/req_mouse_pos.c */
#define req_mouse_pos tigetstr("reqmp")
/* ./src/term/reset_1string.c */
#define reset_1string tigetstr("rs1")
/* ./src/term/reset_2string.c */
#define reset_2string tigetstr("rs2")
/* ./src/term/reset_3string.c */
#define reset_3string tigetstr("rs3")
/* ./src/term/reset_file.c */
#define reset_file tigetstr("rf")
/* ./src/term/restore_cursor.c */
#define restore_cursor tigetstr("rc")
/* ./src/term/row_addr_glitch.c */
#define row_addr_glitch tigetflag("xvpa")
/* ./src/term/row_address.c */
#define row_address tigetstr("vpa")
/* ./src/term/save_cursor.c */
#define save_cursor tigetstr("sc")
/* ./src/term/scancode_escape.c */
#define scancode_escape tigetstr("scesc")
/* ./src/term/scroll_forward.c */
#define scroll_forward tigetstr("ind")
/* ./src/term/scroll_reverse.c */
#define scroll_reverse tigetstr("ri")
/* ./src/term/seT_top_margin.c */
#define seT_top_margin tigetstr("smgt")
/* ./src/term/select_char_set.c */
#define select_char_set tigetstr("scs")
/* ./src/term/semi_auto_right_margin.c */
#define semi_auto_right_margin tigetflag("sam")
/* ./src/term/set0_des_seq.c */
#define set0_des_seq tigetstr("s0ds")
/* ./src/term/set1_des_seq.c */
#define set1_des_seq tigetstr("s1ds")
/* ./src/term/set2_des_seq.c */
#define set2_des_seq tigetstr("s2ds")
/* ./src/term/set3_des_seq.c */
#define set3_des_seq tigetstr("s3ds")
/* ./src/term/set_a_attributes.c */
#define set_a_attributes tigetstr("sgrl")
/* ./src/term/set_a_background.c */
#define set_a_background tigetstr("setab")
/* ./src/term/set_a_foreground.c */
#define set_a_foreground tigetstr("setaf")
/* ./src/term/set_attributes.c */
#define set_attributes tigetstr("sgr")
/* ./src/term/set_background.c */
#define set_background tigetstr("setb")
/* ./src/term/set_bottom_margin.c */
#define set_bottom_margin tigetstr("smgb")
/* ./src/term/set_bottom_margin_parm.c */
#define set_bottom_margin_parm tigetstr("smgbp")
/* ./src/term/set_clock.c */
#define set_clock tigetstr("sclk")
/* ./src/term/set_color_band.c */
#define set_color_band tigetstr("setcolor")
/* ./src/term/set_color_pair.c */
#define set_color_pair tigetstr("scp")
/* ./src/term/set_foreground.c */
#define set_foreground tigetstr("setf")
/* ./src/term/set_left_margin.c */
#define set_left_margin tigetstr("smgl")
/* ./src/term/set_left_margin_parm.c */
#define set_left_margin_parm tigetstr("smglp")
/* ./src/term/set_lr_margin.c */
#define set_lr_margin tigetstr("smglr")
/* ./src/term/set_page_length.c */
#define set_page_length tigetstr("slines")
/* ./src/term/set_pglen_inch.c */
#define set_pglen_inch tigetstr("slength")
/* ./src/term/set_right_margin.c */
#define set_right_margin tigetstr("smgr")
/* ./src/term/set_right_margin_parm.c */
#define set_right_margin_parm tigetstr("smgrp")
/* ./src/term/set_tab.c */
#define set_tab tigetstr("hts")
/* ./src/term/set_tb_margin.c */
#define set_tb_margin tigetstr("smgtb")
/* ./src/term/set_top_margin_parm.c */
#define set_top_margin_parm tigetstr("smgtp")
/* ./src/term/set_window.c */
#define set_window tigetstr("wind")
/* ./src/term/start_bit_image.c */
#define start_bit_image tigetstr("sbim")
/* ./src/term/start_char_set_def.c */
#define start_char_set_def tigetstr("scsd")
/* ./src/term/status_line_esc_ok.c */
#define status_line_esc_ok tigetflag("eslok")
/* ./src/term/stop_bit_image.c */
#define stop_bit_image tigetstr("rbim")
/* ./src/term/stop_char_set_def.c */
#define stop_char_set_def tigetstr("rcsd")
/* ./src/term/subscript_characters.c */
#define subscript_characters tigetstr("subcs")
/* ./src/term/superscript_characters.c */
#define superscript_characters tigetstr("supcs")
/* ./src/term/tab.c */
#define tab tigetstr("ht")
/* ./src/term/these_cause_cr.c */
#define these_cause_cr tigetstr("docr")
/* ./src/term/tilde_glitch.c */
#define tilde_glitch tigetflag("hz")
/* ./src/term/to_status_line.c */
#define to_status_line tigetstr("tsl")
/* ./src/term/tone.c */
#define tone tigetstr("tone")
/* ./src/term/transparent_underline.c */
#define transparent_underline tigetflag("ul")
/* ./src/term/underline_char.c */
#define underline_char tigetstr("uc")
/* ./src/term/up_half_line.c */
#define up_half_line tigetstr("hu")
/* ./src/term/user0.c */
#define user0 tigetstr("u0")
/* ./src/term/user1.c */
#define user1 tigetstr("u1")
/* ./src/term/user2.c */
#define user2 tigetstr("u2")
/* ./src/term/user3.c */
#define user3 tigetstr("u3")
/* ./src/term/user4.c */
#define user4 tigetstr("u4")
/* ./src/term/user5.c */
#define user5 tigetstr("u5")
/* ./src/term/user6.c */
#define user6 tigetstr("u6")
/* ./src/term/user7.c */
#define user7 tigetstr("u7")
/* ./src/term/user8.c */
#define user8 tigetstr("u8")
/* ./src/term/user9.c */
#define user9 tigetstr("u9")
/* ./src/term/virtual_terminal.c */
#define virtual_terminal tigetnum("vt")
/* ./src/term/wait_tone.c */
#define wait_tone tigetstr("wait")
/* ./src/term/wide_char_size.c */
#define wide_char_size tigetnum("widcs")
/* ./src/term/width_status_line.c */
#define width_status_line tigetnum("wsl")
/* ./src/term/xoff_character.c */
#define xoff_character tigetstr("xoffc")
/* ./src/term/xon_character.c */
#define xon_character tigetstr("xonc")
/* ./src/term/xon_xoff.c */
#define xon_xoff tigetflag("xon")
/* ./src/term/zero_motion.c */
#define zero_motion tigetstr("zerom")
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* src/curses/bool.c */
#ifndef __TYPE_bool_DEFINED__
#define __TYPE_bool_DEFINED__
#if defined __STDC_VERSION__ && 199901L <= __STDC_VERSION__
typedef _Bool bool;
#else
typedef int bool;
#endif
#endif

#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/term/TERMINAL.c */
typedef struct __TERMINAL TERMINAL;
/* ./src/term/cur_term.c */
extern TERMINAL * cur_term;
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE))
/* ./src/term/del_curterm.c */
int del_curterm(TERMINAL * __oterm);
/* ./src/term/putp.c */
int putp(const char * __str);
/* ./src/term/restartterm.c */
int restartterm(const char * __term, int __fildes, int * __errret);
/* ./src/term/set_curterm.c */
TERMINAL * set_curterm(TERMINAL * __nterm);
/* ./src/term/setupterm.c */
int setupterm(char * __term, int __fildes, int * __erret);
/* ./src/term/tigetflag.c */
int tigetflag(const char * __capname);
/* ./src/term/tigetnum.c */
int tigetnum(const char * __capname);
/* ./src/term/tigetstr.c */
char * tigetstr(const char * __capname);
/* ./src/term/tiparm.c */
char * tiparm(const char * __cap, ...);
/* ./src/term/tparm.c */
char * tparm(const char * __cap, long __p1, long __p2, long __p3, long __p4, long __p5, long __p6, long __p7, long __p8, long __p9);
/* ./src/term/tputs.c */
int tputs(const char * __str, int __affcnt, int (*__putfunc)(int));
#endif

#if	(defined _XOPEN_SOURCE && ((defined _XOPEN_SOURCE_EXTENDED && _XOPEN_SOURCE_EXTENDED == 1) || 500 <= _XOPEN_SOURCE) && _XOPEN_SOURCE < 700)
/* ./src/term/tgetent.c */
int tgetent(char * __bp, const char * __name);
/* ./src/term/tgetflag.c */
int tgetflag(char id[2]);
/* ./src/term/tgetnum.c */
int tgetnum(char id[2]);
/* ./src/term/tgetstr.c */
char * tgetstr(char id[2], char ** __area);
/* ./src/term/tgoto.c */
char * tgoto(char * __cap, int __col, int __row);
#endif


#endif
