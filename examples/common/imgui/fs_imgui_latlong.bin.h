static const uint8_t fs_imgui_latlong_glsl[651] =
{
	0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x02, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH.o.><...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x02, 0x01, 0x00, 0x00, // geLodEnabled....
	0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, // ...s_texColor...
	0x00, 0x01, 0x00, 0x53, 0x02, 0x00, 0x00, 0x76, 0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, // ...S...varying h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // ighp vec2 v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x68, // oord0;.uniform h
	0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, // ighp vec4 u_imag
	0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x3b, 0x0a, 0x75, 0x6e, 0x69, // eLodEnabled;.uni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, // form lowp sample
	0x72, 0x43, 0x75, 0x62, 0x65, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // rCube s_texColor
	0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, // ;.void main ().{
	0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x72, 0x65, // .  highp vec3 re
	0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, // sult_1;.  highp 
	0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, // float tmpvar_2;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, //   tmpvar_2 = (v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x36, 0x2e, // texcoord0.x * 6.
	0x32, 0x38, 0x33, 0x31, 0x38, 0x35, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, // 283185);.  highp
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, //  float tmpvar_3;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x76, // .  tmpvar_3 = (v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, 0x20, 0x2a, 0x20, 0x33, // _texcoord0.y * 3
	0x2e, 0x31, 0x34, 0x31, 0x35, 0x39, 0x33, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, // .141593);.  resu
	0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x2d, 0x28, 0x73, 0x69, 0x6e, 0x28, // lt_1.x = (-(sin(
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x73, 0x69, 0x6e, // tmpvar_3)) * sin
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, // (tmpvar_2));.  r
	0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x79, 0x20, 0x3d, 0x20, 0x63, 0x6f, 0x73, 0x28, // esult_1.y = cos(
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x73, // tmpvar_3);.  res
	0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x2d, 0x28, 0x73, 0x69, 0x6e, // ult_1.z = (-(sin
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x63, 0x6f, // (tmpvar_3)) * co
	0x73, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // s(tmpvar_2));.  
	0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // lowp vec4 tmpvar
	0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x78, // _4;.  tmpvar_4.x
	0x79, 0x7a, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x43, 0x75, 0x62, 0x65, // yz = textureCube
	0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // Lod    (s_texCol
	0x6f, 0x72, 0x2c, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2c, 0x20, 0x75, 0x5f, // or, result_1, u_
	0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, // imageLodEnabled.
	0x78, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // x).xyz;.  tmpvar
	0x5f, 0x34, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x32, 0x20, 0x2b, 0x20, 0x28, 0x30, // _4.w = (0.2 + (0
	0x2e, 0x38, 0x20, 0x2a, 0x20, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, // .8 * u_imageLodE
	0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x2e, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, // nabled.y));.  gl
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, // _FragColor = tmp
	0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // var_4;.}...
};
static const uint8_t fs_imgui_latlong_spv[1558] =
{
	0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH.o.><...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x12, 0x01, 0x00, 0x00, // geLodEnabled....
	0x01, 0x00, 0xec, 0x05, 0x00, 0x00, 0x03, 0x02, 0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x06, 0x00, // ........#.......
	0x08, 0x00, 0x10, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73, // ..........GLSL.s
	0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00, // td.450..........
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x07, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x9c, 0x00, // ..main..........
	0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, // ................
	0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x2b, 0x00, // ..main........+.
	0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x54, 0x65, 0x78, 0x74, // ..s_texColorText
	0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x77, 0x00, 0x00, 0x00, 0x24, 0x47, // ure.......w...$G
	0x6c, 0x6f, 0x62, 0x61, 0x6c, 0x00, 0x06, 0x00, 0x08, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, // lobal.....w.....
	0x00, 0x00, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, // ..u_imageLodEnab
	0x6c, 0x65, 0x64, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x79, 0x00, 0x00, 0x00, 0x00, 0x00, // led.......y.....
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x93, 0x00, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // ..........v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x62, 0x67, // oord0.........bg
	0x66, 0x78, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x30, 0x00, 0x00, 0x47, 0x00, // fx_FragData0..G.
	0x04, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, // ..+...".......G.
	0x04, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, // ..+...!.......H.
	0x05, 0x00, 0x77, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, // ..w.......#.....
	0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x77, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, // ..G...w.......G.
	0x04, 0x00, 0x79, 0x00, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, // ..y...".......G.
	0x04, 0x00, 0x93, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, // ..............G.
	0x04, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, // ................
	0x02, 0x00, 0x02, 0x00, 0x00, 0x00, 0x21, 0x00, 0x03, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, // ......!.........
	0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0x06, 0x00, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x07, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, 0x09, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, // .. .............
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0b, 0x00, // ................
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x0e, 0x00, // ................
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x19, 0x00, // ................
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x2a, 0x00, // .......... ...*.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x2a, 0x00, // ..........;...*.
	0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x2e, 0x00, // ..+.............
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x2e, 0x00, // .. .......+.....
	0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x03, 0x00, 0x37, 0x00, // ..3...........7.
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x46, 0x00, // ......+.......F.
	0x00, 0x00, 0xdb, 0x0f, 0x49, 0x40, 0x15, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x20, 0x00, // ....I@....L... .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x4d, 0x00, // ......+...L...M.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x53, 0x00, // ......+...L...S.
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x03, 0x00, 0x77, 0x00, 0x00, 0x00, 0x0e, 0x00, // ..........w.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x78, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x77, 0x00, // .. ...x.......w.
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x78, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x02, 0x00, // ..;...x...y.....
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, // .. .............
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x85, 0x00, 0x00, 0x00, 0xcd, 0xcc, // ..+.............
	0x4c, 0x3e, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0xcd, 0xcc, // L>+.............
	0x4c, 0x3f, 0x20, 0x00, 0x04, 0x00, 0x92, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x19, 0x00, // L? .............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x92, 0x00, 0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x01, 0x00, // ..;.............
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x0e, 0x00, // .. .............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9b, 0x00, 0x00, 0x00, 0x9c, 0x00, 0x00, 0x00, 0x03, 0x00, // ..;.............
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0b, 0x01, 0x00, 0x00, 0xdb, 0x0f, // ..+.............
	0xc9, 0x40, 0x01, 0x00, 0x03, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x01, 0x00, // .@..............
	0x03, 0x00, 0x06, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x02, 0x00, // ..........6.....
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0xf8, 0x00, // ................
	0x02, 0x00, 0x05, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x08, 0x00, 0x00, 0x00, 0x2c, 0x00, // ......=.......,.
	0x00, 0x00, 0x2b, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x19, 0x00, 0x00, 0x00, 0x94, 0x00, // ..+...=.........
	0x00, 0x00, 0x93, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x02, 0x01, // ......Q.........
	0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, 0x00, // ................
	0x00, 0x00, 0xdd, 0x00, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x0b, 0x01, 0x00, 0x00, 0x51, 0x00, // ..............Q.
	0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, 0x01, 0x00, 0x00, 0x94, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00, 0x04, 0x01, // ................
	0x00, 0x00, 0x46, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xe3, 0x00, // ..F.............
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00, 0x7f, 0x00, // ................
	0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 0xe3, 0x00, 0x00, 0x00, 0x0c, 0x00, // ................
	0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0d, 0x00, // ................
	0x00, 0x00, 0xdd, 0x00, 0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xe7, 0x00, // ................
	0x00, 0x00, 0xe4, 0x00, 0x00, 0x00, 0xe6, 0x00, 0x00, 0x00, 0x52, 0x00, 0x06, 0x00, 0x0b, 0x00, // ..........R.....
	0x00, 0x00, 0x06, 0x01, 0x00, 0x00, 0xe7, 0x00, 0x00, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xea, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00, 0x52, 0x00, 0x06, 0x00, 0x0b, 0x00, // ..........R.....
	0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0xea, 0x00, 0x00, 0x00, 0x06, 0x01, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x07, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xe1, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x04, 0x00, 0x07, 0x00, // ................
	0x00, 0x00, 0xee, 0x00, 0x00, 0x00, 0xed, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x06, 0x00, 0x07, 0x00, // ................
	0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xdd, 0x00, // ................
	0x00, 0x00, 0x85, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xf1, 0x00, 0x00, 0x00, 0xee, 0x00, // ................
	0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x52, 0x00, 0x06, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x0a, 0x01, // ......R.........
	0x00, 0x00, 0xf1, 0x00, 0x00, 0x00, 0x08, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x41, 0x00, // ..............A.
	0x06, 0x00, 0x7f, 0x00, 0x00, 0x00, 0xbe, 0x00, 0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x33, 0x00, // ..........y...3.
	0x00, 0x00, 0x4d, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0xbf, 0x00, // ..M...=.........
	0x00, 0x00, 0xbe, 0x00, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0x37, 0x00, 0x00, 0x00, 0xf9, 0x00, // ......V...7.....
	0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x0f, 0x01, 0x00, 0x00, 0x58, 0x00, 0x07, 0x00, 0x0e, 0x00, // ..,.......X.....
	0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0xf9, 0x00, 0x00, 0x00, 0x0a, 0x01, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0xbf, 0x00, 0x00, 0x00, 0x41, 0x00, 0x06, 0x00, 0x7f, 0x00, 0x00, 0x00, 0xc2, 0x00, // ......A.........
	0x00, 0x00, 0x79, 0x00, 0x00, 0x00, 0x33, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, 0x3d, 0x00, // ..y...3...S...=.
	0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc3, 0x00, 0x00, 0x00, 0xc2, 0x00, 0x00, 0x00, 0x85, 0x00, // ................
	0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0x86, 0x00, 0x00, 0x00, 0xc3, 0x00, // ................
	0x00, 0x00, 0x81, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00, 0x85, 0x00, // ................
	0x00, 0x00, 0xc4, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xc8, 0x00, // ......Q.........
	0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x07, 0x00, // ..........Q.....
	0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x51, 0x00, // ..............Q.
	0x05, 0x00, 0x07, 0x00, 0x00, 0x00, 0xca, 0x00, 0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x0e, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0xc8, 0x00, // ..P.............
	0x00, 0x00, 0xc9, 0x00, 0x00, 0x00, 0xca, 0x00, 0x00, 0x00, 0xc5, 0x00, 0x00, 0x00, 0x3e, 0x00, // ..............>.
	0x03, 0x00, 0x9c, 0x00, 0x00, 0x00, 0xcb, 0x00, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, // ..............8.
	0x01, 0x00, 0x00, 0x00, 0x10, 0x00,                                                             // ......
};
static const uint8_t fs_imgui_latlong_dx9[548] =
{
	0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x02, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH.o.><...s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, // Color0......u_im
	0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x12, 0x01, 0x00, // ageLodEnabled...
	0x00, 0x01, 0x00, 0xec, 0x01, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0xfe, 0xff, 0x2e, 0x00, 0x43, // ...............C
	0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x02, // TAB.............
	0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x44, // ...............D
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, // ...........P....
	0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x74, // ...`...........t
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // .......s_texColo
	0x72, 0x00, 0xab, 0x04, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, // r...............
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, // ...u_imageLodEna
	0x62, 0x6c, 0x65, 0x64, 0x00, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, // bled............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, // .......ps_3_0.Mi
	0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, // crosoft (R) HLSL
	0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, //  Shader Compiler
	0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x01, 0x00, 0x0f, 0xa0, 0x00, //  10.1..Q........
	0x00, 0x00, 0x3f, 0xdb, 0x0f, 0xc9, 0x40, 0xdb, 0x0f, 0x49, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x51, // ..?...@..I.....Q
	0x00, 0x00, 0x05, 0x02, 0x00, 0x0f, 0xa0, 0xcd, 0xcc, 0x4c, 0x3f, 0xcd, 0xcc, 0x4c, 0x3e, 0x00, // .........L?..L>.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x00, // ................
	0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x98, 0x00, 0x08, 0x0f, 0xa0, 0x02, // ................
	0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x90, 0x13, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x55, 0xa0, 0x01, 0x00, 0xaa, 0xa0, 0x25, // .........U.....%
	0x00, 0x00, 0x02, 0x01, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x01, 0x80, 0x00, 0x00, 0x55, 0x90, 0x01, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0xa0, 0x13, // .....U..........
	0x00, 0x00, 0x02, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x55, 0xa0, 0x01, 0x00, 0xaa, 0xa0, 0x25, // .........U.....%
	0x00, 0x00, 0x02, 0x02, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, // ................
	0x00, 0x05, 0x80, 0x01, 0x00, 0xc5, 0x80, 0x02, 0x00, 0x55, 0x81, 0x01, 0x00, 0x00, 0x02, 0x00, // .........U......
	0x00, 0x02, 0x80, 0x02, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x08, 0x80, 0x00, // ................
	0x00, 0x00, 0xa0, 0x5f, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, // ..._............
	0x08, 0xe4, 0xa0, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x01, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, // .........U......
	0x08, 0x08, 0x80, 0x00, 0x00, 0x55, 0x80, 0x02, 0x00, 0x00, 0xa0, 0x02, 0x00, 0x55, 0xa0, 0xff, // .....U.......U..
	0xff, 0x00, 0x00, 0x00,                                                                         // ....
};
static const uint8_t fs_imgui_latlong_dx11[619] =
{
	0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x02, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH.o.><...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x12, 0x00, 0x00, 0x00, // geLodEnabled....
	0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, // ...s_texColor0..
	0x00, 0x01, 0x00, 0x30, 0x02, 0x00, 0x00, 0x44, 0x58, 0x42, 0x43, 0x8e, 0x4b, 0x65, 0x9b, 0x2e, // ...0...DXBC.Ke..
	0xce, 0x92, 0x33, 0xf0, 0xfb, 0x9d, 0x50, 0x09, 0x30, 0x0b, 0xf1, 0x01, 0x00, 0x00, 0x00, 0x30, // ..3...P.0......0
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0xb8, // .......,........
	0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x50, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x08, // ...ISGNP........
	0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, // ...8............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x00, // ...........D....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03, // ................
	0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x54, // ...SV_POSITION.T
	0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0xab, 0xab, 0x4f, 0x53, 0x47, 0x4e, 0x2c, // EXCOORD....OSGN,
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, // ........... ....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, // ................
	0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, 0x53, // ...SV_TARGET...S
	0x48, 0x44, 0x52, 0x70, 0x01, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x59, // HDRp...@.......Y
	0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x5a, // ...F. .........Z
	0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x30, 0x00, 0x04, 0x00, // ....`......X0...
	0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, // p......UU..b...2
	0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, // .......e.... ...
	0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0a, 0x32, // ...h.......8...2
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x15, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, // ................
	0x40, 0x00, 0x00, 0xdb, 0x0f, 0x49, 0x40, 0xdb, 0x0f, 0xc9, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // @....I@...@.....
	0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x06, 0x42, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ...M...B........
	0xd0, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x07, 0x82, // ...........M....
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xd0, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x80, 0x41, // ...............A
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4d, 0x00, 0x00, 0x06, 0x00, 0xd0, 0x00, 0x00, 0x62, // .......M.......b
	0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x06, 0x01, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, // ...............8
	0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, 0x00, // ...........*....
	0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x82, // ...:.......8....
	0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, // .......:.......*
	0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, 0x00, // .......H........
	0x00, 0x00, 0x00, 0x46, 0x03, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, 0x00, // ...F.......F~...
	0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x80, 0x20, 0x00, 0x00, // ....`........ ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, // .......6...r ...
	0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x82, // ...F.......2....
	0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x80, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, //  ........ ......
	0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0xcd, 0xcc, 0x4c, 0x3f, 0x01, 0x40, 0x00, 0x00, 0xcd, // ....@....L?.@...
	0xcc, 0x4c, 0x3e, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x10, 0x00,                               // .L>>.......
};
static const uint8_t fs_imgui_latlong_mtl[1038] =
{
	0x46, 0x53, 0x48, 0x05, 0x6f, 0x1e, 0x3e, 0x3c, 0x01, 0x00, 0x11, 0x75, 0x5f, 0x69, 0x6d, 0x61, // FSH.o.><...u_ima
	0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, 0x64, 0x02, 0x01, 0x00, 0x00, // geLodEnabled....
	0x01, 0x00, 0xe7, 0x03, 0x00, 0x00, 0x75, 0x73, 0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, // ......using name
	0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, // space metal;.str
	0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, // uct xlatMtlShade
	0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // rInput {.  float
	0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, // 2 v_texcoord0;.}
	0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, // ;.struct xlatMtl
	0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, // ShaderOutput {. 
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, //  float4 gl_FragC
	0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, // olor;.};.struct 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, // xlatMtlShaderUni
	0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, // form {.  float4 
	0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, // u_imageLodEnable
	0x64, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, // d;.};.fragment x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, // latMtlShaderOutp
	0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, // ut xlatMtlMain (
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, // xlatMtlShaderInp
	0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, // ut _mtl_i [[stag
	0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, // e_in]], constant
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, //  xlatMtlShaderUn
	0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, // iform& _mtl_u [[
	0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x0a, 0x20, 0x20, 0x2c, 0x20, // buffer(0)]].  , 
	0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x63, 0x75, 0x62, 0x65, 0x3c, 0x66, 0x6c, //   texturecube<fl
	0x6f, 0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, // oat> s_texColor 
	0x5b, 0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, // [[texture(0)]], 
	0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, // sampler _mtlsmp_
	0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, // s_texColor [[sam
	0x70, 0x6c, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, // pler(0)]]).{.  x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, // latMtlShaderOutp
	0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, // ut _mtl_o;.  flo
	0x61, 0x74, 0x33, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x30, // at3 result_1 = 0
	0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // ;.  float tmpvar
	0x5f, 0x32, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // _2 = 0;.  tmpvar
	0x5f, 0x32, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, // _2 = (_mtl_i.v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x20, 0x2a, 0x20, 0x36, 0x2e, 0x32, // excoord0.x * 6.2
	0x38, 0x33, 0x31, 0x38, 0x35, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, // 83185);.  float 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, // tmpvar_3 = 0;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x28, 0x5f, 0x6d, 0x74, 0x6c, // tmpvar_3 = (_mtl
	0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x79, // _i.v_texcoord0.y
	0x20, 0x2a, 0x20, 0x33, 0x2e, 0x31, 0x34, 0x31, 0x35, 0x39, 0x33, 0x29, 0x3b, 0x0a, 0x20, 0x20, //  * 3.141593);.  
	0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x78, 0x20, 0x3d, 0x20, 0x28, 0x2d, 0x28, // result_1.x = (-(
	0x73, 0x69, 0x6e, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x20, 0x2a, // sin(tmpvar_3)) *
	0x20, 0x73, 0x69, 0x6e, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, 0x3b, //  sin(tmpvar_2));
	0x0a, 0x20, 0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x79, 0x20, 0x3d, 0x20, // .  result_1.y = 
	0x63, 0x6f, 0x73, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x3b, 0x0a, 0x20, // cos(tmpvar_3);. 
	0x20, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, 0x31, 0x2e, 0x7a, 0x20, 0x3d, 0x20, 0x28, 0x2d, //  result_1.z = (-
	0x28, 0x73, 0x69, 0x6e, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x29, 0x29, 0x20, // (sin(tmpvar_3)) 
	0x2a, 0x20, 0x63, 0x6f, 0x73, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x29, 0x29, // * cos(tmpvar_2))
	0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ;.  float4 tmpva
	0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // r_4 = 0;.  tmpva
	0x72, 0x5f, 0x34, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // r_4.xyz = s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, // olor.sample(_mtl
	0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, // smp_s_texColor, 
	0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x29, 0x28, 0x72, 0x65, 0x73, 0x75, 0x6c, 0x74, 0x5f, // (float3)(result_
	0x31, 0x29, 0x2c, 0x20, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, // 1), level(_mtl_u
	0x2e, 0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, // .u_imageLodEnabl
	0x65, 0x64, 0x2e, 0x78, 0x29, 0x29, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // ed.x)).xyz;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x32, 0x20, // pvar_4.w = (0.2 
	0x2b, 0x20, 0x28, 0x30, 0x2e, 0x38, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x2e, // + (0.8 * _mtl_u.
	0x75, 0x5f, 0x69, 0x6d, 0x61, 0x67, 0x65, 0x4c, 0x6f, 0x64, 0x45, 0x6e, 0x61, 0x62, 0x6c, 0x65, // u_imageLodEnable
	0x64, 0x2e, 0x79, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x2e, // d.y));.  _mtl_o.
	0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, // gl_FragColor = t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, // mpvar_4;.  retur
	0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,             // n _mtl_o;.}...
};
extern const uint8_t* fs_imgui_latlong_pssl;
extern const uint32_t fs_imgui_latlong_pssl_size;
