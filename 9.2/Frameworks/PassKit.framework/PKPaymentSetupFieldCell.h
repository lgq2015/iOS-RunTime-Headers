/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKPaymentSetupFieldCell : PKTableViewCell <PKDatePickerDelegate, UITextFieldDelegate> {
    BOOL  _canResignFirstResponder;
    PKDatePicker * _dateInputView;
    <PKPaymentSetupFieldCellDelegate> * _delegate;
    UIColor * _editableTextFieldCameraCapturedTextColor;
    UIColor * _editableTextFieldDisabledTextColor;
    UIColor * _editableTextFieldTextColor;
    BOOL  _enabled;
    BOOL  _ignoreCurrentValueChangedNotifications;
    float  _minimumTextLabelWidth;
    PKPaymentSetupField * _paymentSetupField;
    BOOL  _shouldDrawFullWidthSeperator;
    BOOL  _shouldDrawSeperator;
}

@property (nonatomic) BOOL canResignFirstResponder;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentSetupFieldCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIColor *editableTextFieldCameraCapturedTextColor;
@property (nonatomic, copy) UIColor *editableTextFieldDisabledTextColor;
@property (nonatomic, copy) UIColor *editableTextFieldTextColor;
@property (getter=isEnabled, nonatomic) BOOL enabled;
@property (readonly) unsigned int hash;
@property (nonatomic) float minimumTextLabelWidth;
@property (nonatomic, retain) PKPaymentSetupField *paymentSetupField;
@property (nonatomic) BOOL shouldDrawFullWidthSeperator;
@property (nonatomic) BOOL shouldDrawSeperator;
@property (readonly) Class superclass;

+ (float)minimumCellHeight;
+ (id)paymentSetupFieldCellForField:(id)arg1 fromTableView:(id)arg2;
+ (id)reuseIdentifier;
+ (int)tableViewCellStyle;

- (void)_applyDefaultValues;
- (void)_editableTextFieldDidBeginEditing:(id)arg1;
- (void)_editableTextFieldValueChanged:(id)arg1;
- (void)_paymentSetupFieldCurrentValueChangedNotification:(id)arg1;
- (void)_pullCurrentValueFromField;
- (void)_pushCurrentValueToField;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_separatorFrame;
- (void)_updateDisplay:(BOOL)arg1;
- (void)_updateDisplayForFieldTypeDate:(id)arg1;
- (void)_updateDisplayForFieldTypeText:(id)arg1;
- (BOOL)canResignFirstResponder;
- (void)datePicker:(id)arg1 didChangeDate:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (id)editableTextFieldCameraCapturedTextColor;
- (id)editableTextFieldDisabledTextColor;
- (id)editableTextFieldTextColor;
- (float)heightForWidth:(float)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSetupField:(id)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isEnabled;
- (void)layoutSubviews;
- (float)minimumTextLabelWidth;
- (id)paymentSetupField;
- (void)pk_applyAppearance:(struct _PKAppearanceSpecifier { BOOL x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; id x9; id x10; id x11; id x12; id x13; /* Warning: Unrecognized filer type: '' using 'void*' */ void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; void*x20; void*x21; SEL x22; void*x23; void*x24; void*x25; void*x26; void*x27; inout unsigned short x28; unsigned int x29; unsigned short x30; bycopy unsigned long x31; void*x32; unsigned int x33; inout void*x34; void*x35; in BOOL x36; out double x37; int x38; in void*x39; long doublex40; void*x41; void*x42; void*x43; BOOL x44; void*x45; out const void*x46; void*x47; void*x48; void*x49; void*x50; void*x51; void*x52; void*x53; void*x54; void*x55; void*x56; void*x57; void*x58; void*x59; void*x60; SEL x61; void*x62; void*x63; void*x64; void*x65; void*x66; inout unsigned short x67; unsigned int x68; unsigned short x69; bycopy unsigned long x70; void*x71; unsigned int x72; inout void*x73; void*x74; in BOOL x75; out double x76; int x77; in void*x78; long doublex79; void*x80; void*x81; void*x82; BOOL x83; void*x84; out const void*x85; void*x86; void*x87; void*x88; void*x89; void*x90; void*x91; void*x92; void*x93; void*x94; void*x95; void*x96; void*x97; void*x98; void*x99; SEL x100; void*x101; void*x102; void*x103; void*x104; void*x105; void*x106; void*x107; void*x108; void*x109; void*x110; void*x111; void*x112; void*x113; void*x114; void*x115; void*x116; void*x117; void*x118; void*x119; void*x120; void*x121; void*x122; void*x123; void*x124; void*x125; void*x126; void*x127; void*x128; void*x129; void*x130; void*x131; void*x132; void*x133; void*x134; void*x135; void*x136; void*x137; void*x138; struct x139; void*x140; void*x141; void*x142; void*x143; void*x144; void*x145; void*x146; void*x147; void*x148; void*x149; void*x150; void*x151; void*x152; union x153; void*x154; void*x155; void*x156; void x157; void*x158; out void*x159; int x160; void*x161; double x162; void*x163; char *x164; void*x165; void*x166; void*x167; void*x168; void*x169; void*x170; void*x171; void*x172; void*x173; void*x174; void*x175; void*x176; void*x177; void*x178; SEL x179; void*x180; void*x181; void*x182; void*x183; void*x184; void*x185; void*x186; void*x187; void*x188; void*x189; void*x190; void*x191; void*x192; void*x193; void*x194; void*x195; void*x196; void*x197; void*x198; void*x199; void*x200; void*x201; void*x202; void*x203; void*x204; void*x205; void*x206; void*x207; void*x208; void*x209; void*x210; SEL x211; void*x212; void*x213; void*x214; void*x215; void*x216; void*x217; void*x218; void*x219; void*x220; void*x221; void*x222; void*x223; void*x224; void*x225; void*x226; void*x227; void*x228; void*x229; void*x230; void*x231; void*x232; void*x233; void*x234; void*x235; void*x236; void*x237; void*x238; void*x239; void*x240; void*x241; void*x242; void*x243; void*x244; void*x245; void*x246; unsigned long long x247; void*x248; void*x249; void*x250; void*x251; void*x252; void*x253; void*x254; void*x255; void*x256; void*x257; void*x258; void*x259; void*x260; void*x261; void*x262; void*x263; void*x264; void*x265; void*x266; void*x267; void*x268; void*x269; void*x270; void*x271; void*x272; void*x273; void*x274; SEL x275; void*x276; void*x277; void*x278; void*x279; void*x280; void*x281; void*x282; void*x283; void*x284; void*x285; void*x286; void*x287; void*x288; void*x289; void*x290; SEL x291; void*x292; void*x293; void*x294; void*x295; unsigned char x296; void*x297; unsigned short x298; void*x299; short x300; void*x301; void*x302; void*x303; void*x304; unsigned long x305; int x306; unsigned int x307/* : ? */; const void*x308; const void*x309; void*x310; void*x311; const int x312; void x313; void*x314; void*x315; void*x316; void*x317; const void*x318; void*x319; void*x320; void*x321; out const void*x322; short x323; void*x324; int x325; void*x326; out const void*x327; unsigned int x328; void*x329; void*x330; out const void*x331; void*x332; float x333; const void*x334; void*x335; void*x336; void*x337; out const void*x338; void*x339; int x340; void*x341; out const void*x342; unsigned int x343; void*x344; void*x345; out const void*x346; void*x347; void*x348; void*x349; void*x350; void*x351; void*x352; void*x353; SEL x354; void*x355; void*x356; void*x357; void*x358; void*x359; void*x360; void*x361; long doublex362; void*x363; void*x364; long x365; int x366; BOOL x367; void*x368; void*x369; int x370; out in oneway void*x371; in double x372; out const unsigned int x373; long doublex374; unsigned short x375; void*x376; out const void*x377; void*x378; void*x379; void*x380; void*x381; void*x382; void*x383; void*x384; void*x385; void*x386; void*x387; void*x388; void*x389; void*x390; void*x391; void*x392; SEL x393; void*x394; void*x395; void*x396; void*x397; void*x398; void*x399; unsigned short x400; void*x401; short x402; void*x403; void*x404; void*x405; void*x406; unsigned long x407; int x408; unsigned int x409/* : ? */; const void*x410; const void*x411; void*x412; void*x413; const int x414; void x415; void*x416; void*x417; void*x418; void*x419; const void*x420; void*x421; void*x422; void*x423; out const void*x424; short x425; void*x426; unsigned int x427; long doublex428; unsigned short x429; void*x430; out void*x431; in double x432; void*x433; void*x434; int x435; out in void*x436; float x437; const void*x438; void*x439; void*x440; void*x441; out const void*x442; void*x443; unsigned int x444; long doublex445; unsigned short x446; void*x447; out void*x448; in double x449; void*x450; void*x451; int x452; out in void*x453; void*x454; void*x455; void*x456; void*x457; void*x458; void*x459; void*x460; void*x461; void*x462; void*x463; void*x464; void*x465; void*x466; void*x467; void*x468; void*x469; void*x470; void*x471; SEL x472; void*x473; void*x474; void*x475; void*x476; void*x477; void*x478; void*x479; void*x480; void*x481; void*x482; void*x483; void*x484; void*x485; void*x486; void*x487; void*x488; void*x489; void*x490; void*x491; void*x492; void*x493; void*x494; void*x495; void*x496; void*x497; void*x498; void*x499; void*x500; void*x501; void*x502; void*x503; long long x504; void*x505; void*x506; void*x507; void*x508; void*x509; void*x510; unsigned short x511; unsigned char x512; out void*x513; void*x514; int x515; in void*x516; void*x517; void*x518; void*x519; void*x520; void*x521; void*x522; void*x523; void*x524; void*x525; void*x526; void*x527; void*x528; void*x529; void*x530; void*x531; void*x532; short x533; long long x534; void*x535; void*x536; void*x537; void*x538; void* x539[ /* ? */ ]; void*x540; void*x541; void*x542; void*x543; void*x544; void*x545; void*x546; void*x547; void*x548; short x549; long long x550; void*x551; void*x552; void*x553; void*x554; void*x555; void*x556; void*x557; void*x558; void*x559; double x560; int x561; void*x562; unsigned long x563; out BOOL x564; void*x565; void*x566; int x567; out in unsigned char x568; long x569; void*x570; short x571; void*x572; void*x573; const void*x574; const void*x575; double x576; int x577; BOOL x578; void*x579; void*x580; void*x581; void*x582; void*x583; void*x584; void*x585; void*x586; void*x587; void*x588; void*x589; void*x590; void*x591; void*x592; void*x593; void*x594; void*x595; void*x596; void*x597; void*x598; void*x599; void*x600; void*x601; void*x602; void*x603; void*x604; void*x605; void*x606; void*x607; void*x608; void*x609; void*x610; void*x611; void*x612; void*x613; void*x614; void*x615; void*x616; void*x617; void*x618; void*x619; void*x620; void*x621; void*x622; void*x623; SEL x624; void*x625; void*x626; void*x627; void*x628; char *x629; unsigned char x630; inout oneway unsigned char x631; void*x632; const double x633; unsigned long x634; void*x635; void*x636; void*x637; BOOL x638; void*x639; unsigned int x640; in short x641; void*x642; void*x643; in void*x644; void*x645; void*x646; short x647; short x648; void*x649; void*x650; int x651; in void*x652; unsigned long x653; int x654; in void*x655; void*x656; void*x657; in void*x658; const void*x659; void*x660; out const void*x661; void*x662; void*x663; void*x664; void*x665; void*x666; void*x667; void*x668; void*x669; void*x670; void*x671; void*x672; void*x673; void*x674; void*x675; short x676; long long x677; void*x678; void*x679; void*x680; void*x681; unsigned long long x682; void*x683; void*x684; unsigned short x685; bycopy unsigned int x686/* : ? */; float x687; void*x688; short x689; BOOL x690; void*x691; void*x692; void*x693; unsigned int x694/* : ? */; long x695; void*x696; long doublex697; void*x698; short x699; BOOL x700; const int x701; void*x702; void*x703; int x704; out in void*x705; void*x706; void*x707; void*x708; void*x709; void*x710; void*x711; void*x712; void*x713; void*x714; void*x715; void*x716; void*x717; void*x718; void*x719; short x720; long long x721; void*x722; void*x723; void*x724; void*x725; inout void*x726; long doublex727; long doublex728; int x729; short x730; BOOL x731; const void*x732; void*x733; void*x734; unsigned char x735; out long x736; long x737; void*x738; BOOL x739; void*x740; int x741; out in unsigned char x742; void*x743; long x744; BOOL x745; void*x746; long x747; void*x748; void*x749; out const void*x750; void*x751; void*x752; void*x753; void*x754; void*x755; void*x756; void*x757; void*x758; void*x759; void*x760; short x761; long long x762; void*x763; void*x764; void*x765; void*x766; void*x767; void*x768; unsigned short x769; unsigned char x770; void*x771; void*x772; long doublex773; void*x774; bool x775; bycopy void*x776; void*x777; in double x778; long x779; void*x780; void*x781; void*x782; void*x783; void*x784; void*x785; void*x786; void*x787; void*x788; void*x789; void*x790; short x791; long long x792; void*x793; void*x794; void*x795; void*x796; unsigned int x797; void*x798; void*x799; unsigned char x800; void*x801; void*x802; long x803; long x804; void*x805; in void*x806; void*x807; void*x808; void x809; void*x810; in void*x811; void*x812; void*x813; in double x814; long x815; void*x816; const void*x817; void*x818; void*x819; void*x820; void*x821; void*x822; void*x823; void*x824; void*x825; void*x826; void*x827; void*x828; void*x829; void*x830; void*x831; void*x832; void*x833; void*x834; short x835; long long x836; void*x837; void*x838; void*x839; void*x840; void*x841; void*x842; long doublex843; unsigned long x844; int x845; short x846; void*x847; void*x848; void*x849; unsigned int x850/* : ? */; long x851; void*x852; void*x853; void*x854; void*x855; void*x856; void*x857; void*x858; void*x859; void*x860; void*x861; void*x862; void*x863; void*x864; void*x865; void*x866; short x867; long long x868; void*x869; void*x870; void*x871; void*x872; long doublex873; void*x874; long doublex875; unsigned int x876; void*x877; void*x878; void*x879; void*x880; void*x881; int x882; long x883; long x884; void*x885; void*x886; void*x887; void*x888; void*x889; void*x890; void*x891; void*x892; void*x893; void*x894; void*x895; void*x896; void*x897; short x898; long long x899; void*x900; void*x901; void*x902; void*x903; bool x904; void*x905; void*x906; void*x907; void*x908; void*x909; const void*x910; void*x911; void*x912; short x913; long long x914; void*x915; void*x916; void*x917; void*x918; void*x919; void*x920; unsigned char x921; void*x922; const const void*x923; in void*x924; void*x925; int x926; void*x927; void*x928; void*x929; void*x930; const void*x931; void*x932; const oneway int x933; void*x934; void*x935; void*x936; void*x937; void*x938; void*x939; void*x940; void*x941; void*x942; void*x943; void*x944; void*x945; void*x946; void*x947; void*x948; void*x949; void*x950; void*x951; void*x952; void*x953; short x954; long long x955; void*x956; void*x957; void*x958; void*x959; void*x960; void*x961; unsigned short x962; void*x963; short x964; void*x965; void*x966; void*x967; void*x968; unsigned long x969; int x970; unsigned int x971/* : ? */; const void*x972; const void*x973; void*x974; void*x975; const void*x976; void*x977; void*x978; void*x979; out const void*x980; short x981; void*x982; void*x983; void x984; void*x985; in void*x986; void*x987; int x988; void*x989; void*x990; unsigned int x991; void*x992; float x993; const void*x994; void*x995; void*x996; void*x997; out const void*x998; void*x999; void*x1000; void x1001; void*x1002; in void*x1003; void*x1004; int x1005; void*x1006; void*x1007; unsigned int x1008; void*x1009; void*x1010; void*x1011; void*x1012; void*x1013; void*x1014; void*x1015; void*x1016; void*x1017; void*x1018; void*x1019; void*x1020; void*x1021; void*x1022; void*x1023; short x1024; long long x1025; void*x1026; void*x1027; void*x1028; void*x1029; void*x1030; void*x1031; void*x1032; void*x1033; void*x1034; void*x1035; void*x1036; void*x1037; void*x1038; void*x1039; void*x1040; void*x1041; void*x1042; void*x1043; void*x1044; void*x1045; void*x1046; void*x1047; void*x1048; void*x1049; void*x1050; void*x1051; void*x1052; void*x1053; void*x1054; void*x1055; short x1056; long long x1057; void*x1058; void*x1059; void*x1060; void*x1061; void*x1062; void*x1063; unsigned short x1064; void*x1065; short x1066; void*x1067; void*x1068; void*x1069; void*x1070; unsigned long x1071; int x1072; unsigned int x1073/* : ? */; const void*x1074; const void*x1075; void*x1076; void*x1077; const int x1078; void x1079; void*x1080; void*x1081; void*x1082; void*x1083; const void*x1084; void*x1085; void*x1086; void*x1087; out const void*x1088; short x1089; void*x1090; void*x1091; void*x1092; short x1093; int x1094; BOOL x1095; unsigned long x1096; int x1097; unsigned int x1098/* : ? */; const void*x1099; const void*x1100; void*x1101; float x1102; const void*x1103; void*x1104; void*x1105; void*x1106; out const void*x1107; void*x1108; void*x1109; void*x1110; short x1111; int x1112; BOOL x1113; unsigned long x1114; int x1115; unsigned int x1116/* : ? */; const void*x1117; const void*x1118; void*x1119; void*x1120; void*x1121; void*x1122; void*x1123; SEL x1124; void*x1125; void*x1126; void*x1127; void*x1128; void*x1129; void*x1130; unsigned char x1131; long doublex1132; void*x1133; void*x1134; unsigned int x1135/* : ? */; unsigned short x1136; void*x1137; const void x1138; void*x1139; const void*x1140; unsigned int x1141; void*x1142; void*x1143; unsigned short x1144; void*x1145; const void*x1146; void*x1147; void*x1148; void*x1149; void*x1150; const short x1151; void*x1152; const void*x1153; void*x1154; void*x1155; void*x1156; void*x1157; void*x1158; void*x1159; void*x1160; void*x1161; void*x1162; void*x1163; void*x1164; void*x1165; void*x1166; void*x1167; Class x1168; void*x1169; void*x1170; unsigned long long x1171; void*x1172; void*x1173; unsigned char x1174; long doublex1175; void*x1176; void*x1177; unsigned int x1178/* : ? */; unsigned short x1179; void*x1180; const void x1181; void*x1182; const void*x1183; unsigned int x1184; void*x1185; void*x1186; unsigned short x1187; void*x1188; const void*x1189; void*x1190; void*x1191; void*x1192; void*x1193; const short x1194; void*x1195; const void*x1196; void*x1197; void*x1198; void*x1199; void*x1200; void*x1201; void*x1202; void*x1203; void*x1204; void*x1205; void*x1206; void*x1207; void*x1208; void*x1209; void*x1210; Class x1211; void*x1212; void*x1213; unsigned long long x1214; void*x1215; void*x1216; unsigned int x1217; bycopy void*x1218; void*x1219; in unsigned int x1220; in unsigned int x1221; bool x1222; out out void*x1223; short x1224; BOOL x1225; void*x1226; int x1227; void x1228; int x1229; void*x1230; void*x1231; void*x1232; void*x1233; void*x1234; void*x1235; void*x1236; Class x1237; void*x1238; void*x1239; unsigned long long x1240; void*x1241; void*x1242; void*x1243; long doublex1244; unsigned char x1245; void*x1246; long x1247; long x1248; void*x1249; int x1250; short x1251; void*x1252; out const void*x1253; long doublex1254; void*x1255; void*x1256; void*x1257; unsigned int x1258/* : ? */; void*x1259; short x1260; void*x1261; unsigned int x1262; in float x1263; out void*x1264; void*x1265; void*x1266; void*x1267; void*x1268; void*x1269; void*x1270; void*x1271; void*x1272; void*x1273; void*x1274; void*x1275; void*x1276; void*x1277; void*x1278; void*x1279; void*x1280; Class x1281; void*x1282; void*x1283; unsigned long long x1284; void*x1285; unsigned long x1286; void*x1287; unsigned short x1288; void*x1289; void*x1290; void*x1291; short x1292; short x1293; void*x1294; out const double x1295; void*x1296; void*x1297; short x1298; void*x1299; void*x1300; inout out void*x1301; int x1302; float x1303; int x1304; BOOL x1305; void*x1306; void*x1307; int x1308; out in void*x1309; void*x1310; void*x1311; void*x1312; void*x1313; void*x1314; void*x1315; void*x1316; void*x1317; void*x1318; void*x1319; void*x1320; void*x1321; void*x1322; void*x1323; unsigned long long x1324; void*x1325; void*x1326; void*x1327; void*x1328; void*x1329; const void*x1330; in double x1331; long x1332; int x1333; in void*x1334; void*x1335; void*x1336; void*x1337; void*x1338; void*x1339; void*x1340; void*x1341; void*x1342; void*x1343; void*x1344; void*x1345; void*x1346; void*x1347; void*x1348; void*x1349; oneway void*x1350; void*x1351; void*x1352; void*x1353; void*x1354; bool x1355; void*x1356; void*x1357; int x1358; void*x1359; long doublex1360; void*x1361; float x1362; long x1363; void*x1364; void*x1365; void*x1366; void*x1367; void*x1368; void*x1369; out const void*x1370; bycopy void*x1371; void*x1372; void*x1373; void*x1374; void*x1375; unsigned short x1376; void*x1377; const void*x1378; void*x1379; void*x1380; void*x1381; void*x1382; void*x1383; void*x1384; void*x1385; void*x1386; void*x1387; void*x1388; void*x1389; void*x1390; void*x1391; void*x1392; void*x1393; double x1394; void*x1395; void*x1396; void*x1397; void*x1398; void*x1399; void*x1400; out void*x1401; int x1402; out in void*x1403; void*x1404; in void*x1405; void*x1406; void*x1407; const unsigned int x1408; in void*x1409; void*x1410; const in void*x1411; long x1412; void*x1413; void*x1414; void*x1415; void*x1416; void*x1417; void*x1418; void*x1419; void*x1420; void*x1421; void*x1422; void*x1423; void*x1424; void*x1425; void*x1426; void*x1427; void*x1428; void*x1429; void*x1430; void*x1431; void*x1432; void*x1433; void*x1434; void*x1435; void*x1436; void*x1437; void*x1438; void*x1439; unsigned char x1440; long x1441; out void*x1442; double x1443; unsigned short x1444; void*x1445; const void x1446; int x1447; BOOL x1448; void*x1449; unsigned short x1450; void*x1451; void*x1452; void*x1453; void*x1454; short x1455; unsigned char x1456; out in void*x1457; const out long x1458; long x1459; void*x1460; const void*x1461; void*x1462; void*x1463; void*x1464; void*x1465; void*x1466; void*x1467; void*x1468; void*x1469; void*x1470; void*x1471; void*x1472; void*x1473; void*x1474; void*x1475; void*x1476; long long x1477; void*x1478; void*x1479; inout unsigned short x1480; void*x1481; void*x1482; void*x1483; void*x1484; in void*x1485; short x1486; void*x1487; bool x1488; int x1489; void*x1490; const void*x1491; void*x1492; void*x1493; void*x1494; void*x1495; unsigned short x1496; void*x1497; void*x1498; void*x1499; void*x1500; void*x1501; void*x1502; void*x1503; void*x1504; void*x1505; void*x1506; void*x1507; void*x1508; void*x1509; void*x1510; void*x1511; void*x1512; void*x1513; void*x1514; void*x1515; void*x1516; void*x1517; void*x1518; }*)arg1;
- (id)pk_childrenForAppearance;
- (void)prepareForReuse;
- (void)setCanResignFirstResponder:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditableTextFieldCameraCapturedTextColor:(id)arg1;
- (void)setEditableTextFieldDisabledTextColor:(id)arg1;
- (void)setEditableTextFieldTextColor:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setMinimumTextLabelWidth:(float)arg1;
- (void)setPaymentSetupField:(id)arg1;
- (void)setShouldDrawFullWidthSeperator:(BOOL)arg1;
- (void)setShouldDrawSeperator:(BOOL)arg1;
- (BOOL)shouldDrawFullWidthSeperator;
- (BOOL)shouldDrawSeperator;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldBeginEditing:(id)arg1;
- (BOOL)textFieldShouldClear:(id)arg1;
- (BOOL)textFieldShouldEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updatePaymentSetupFieldWithCurrentCellValue;

@end