int RowIdx[] = {
  0,  48,  96, 144, 192, 240, 288, 336, 384, 432,480, 528, 576, 624, 672, 720,
768, 816, 864, 912, 960, 1008, 1056, 1104, 1152, 1200,1248, 1296, 1344, 1392, 1440, 1488,
1536
};

int Matrix[] = {
  0,   1,   2,   3,   4,   5,   6,   7,   8,   9, 10,  11,  12,  13,  14,  15,
256, 257, 258, 259, 260, 261, 262, 263, 264, 265,266, 267, 268, 269, 270, 271,
512, 513, 514, 515, 516, 517, 518, 519, 520, 521,522, 523, 524, 525, 526, 527,
 31,  30,  29,  28,  27,  26,  25,  24,  23,  22, 21,  20,  19,  18,  17,  16,
287, 286, 285, 284, 283, 282, 281, 280, 279, 278,277, 276, 275, 274, 273, 272,
543, 542, 541, 540, 539, 538, 537, 536, 535, 534,533, 532, 531, 530, 529, 528,
 32,  33,  34,  35,  36,  37,  38,  39,  40,  41, 42,  43,  44,  45,  46,  47,
288, 289, 290, 291, 292, 293, 294, 295, 296, 297,298, 299, 300, 301, 302, 303,
544, 545, 546, 547, 548, 549, 550, 551, 552, 553,554, 555, 556, 557, 558, 559,
 63,  62,  61,  60,  59,  58,  57,  56,  55,  54, 53,  52,  51,  50,  49,  48,
319, 318, 317, 316, 315, 314, 313, 312, 311, 310,309, 308, 307, 306, 305, 304,
575, 574, 573, 572, 571, 570, 569, 568, 567, 566,565, 564, 563, 562, 561, 560,
 64,  65,  66,  67,  68,  69,  70,  71,  72,  73, 74,  75,  76,  77,  78,  79,
320, 321, 322, 323, 324, 325, 326, 327, 328, 329,330, 331, 332, 333, 334, 335,
576, 577, 578, 579, 580, 581, 582, 583, 584, 585,586, 587, 588, 589, 590, 591,
 95,  94,  93,  92,  91,  90,  89,  88,  87,  86, 85,  84,  83,  82,  81,  80,
351, 350, 349, 348, 347, 346, 345, 344, 343, 342,341, 340, 339, 338, 337, 336,
607, 606, 605, 604, 603, 602, 601, 600, 599, 598,597, 596, 595, 594, 593, 592,
 96,  97,  98,  99, 100, 101, 102, 103, 104, 105,106, 107, 108, 109, 110, 111,
352, 353, 354, 355, 356, 357, 358, 359, 360, 361,362, 363, 364, 365, 366, 367,
608, 609, 610, 611, 612, 613, 614, 615, 616, 617,618, 619, 620, 621, 622, 623,
127, 126, 125, 124, 123, 122, 121, 120, 119, 118,117, 116, 115, 114, 113, 112,
383, 382, 381, 380, 379, 378, 377, 376, 375, 374,373, 372, 371, 370, 369, 368,
639, 638, 637, 636, 635, 634, 633, 632, 631, 630,629, 628, 627, 626, 625, 624,
128, 129, 130, 131, 132, 133, 134, 135, 136, 137,138, 139, 140, 141, 142, 143,
384, 385, 386, 387, 388, 389, 390, 391, 392, 393,394, 395, 396, 397, 398, 399,
640, 641, 642, 643, 644, 645, 646, 647, 648, 649,650, 651, 652, 653, 654, 655,
159, 158, 157, 156, 155, 154, 153, 152, 151, 150,149, 148, 147, 146, 145, 144,
415, 414, 413, 412, 411, 410, 409, 408, 407, 406,405, 404, 403, 402, 401, 400,
671, 670, 669, 668, 667, 666, 665, 664, 663, 662,661, 660, 659, 658, 657, 656,
160, 161, 162, 163, 164, 165, 166, 167, 168, 169,170, 171, 172, 173, 174, 175,
416, 417, 418, 419, 420, 421, 422, 423, 424, 425,426, 427, 428, 429, 430, 431,
672, 673, 674, 675, 676, 677, 678, 679, 680, 681,682, 683, 684, 685, 686, 687,
191, 190, 189, 188, 187, 186, 185, 184, 183, 182,181, 180, 179, 178, 177, 176,
447, 446, 445, 444, 443, 442, 441, 440, 439, 438,437, 436, 435, 434, 433, 432,
703, 702, 701, 700, 699, 698, 697, 696, 695, 694,693, 692, 691, 690, 689, 688,
192, 193, 194, 195, 196, 197, 198, 199, 200, 201,202, 203, 204, 205, 206, 207,
448, 449, 450, 451, 452, 453, 454, 455, 456, 457,458, 459, 460, 461, 462, 463,
704, 705, 706, 707, 708, 709, 710, 711, 712, 713,714, 715, 716, 717, 718, 719,
223, 222, 221, 220, 219, 218, 217, 216, 215, 214,213, 212, 211, 210, 209, 208,
479, 478, 477, 476, 475, 474, 473, 472, 471, 470,469, 468, 467, 466, 465, 464,
735, 734, 733, 732, 731, 730, 729, 728, 727, 726,725, 724, 723, 722, 721, 720,
224, 225, 226, 227, 228, 229, 230, 231, 232, 233,234, 235, 236, 237, 238, 239,
480, 481, 482, 483, 484, 485, 486, 487, 488, 489,490, 491, 492, 493, 494, 495,
736, 737, 738, 739, 740, 741, 742, 743, 744, 745,746, 747, 748, 749, 750, 751,
255, 254, 253, 252, 251, 250, 249, 248, 247, 246,245, 244, 243, 242, 241, 240,
511, 510, 509, 508, 507, 506, 505, 504, 503, 502,501, 500, 499, 498, 497, 496,
767, 766, 765, 764, 763, 762, 761, 760, 759, 758,757, 756, 755, 754, 753, 752,
768, 769, 770, 771, 772, 773, 774, 775, 776, 777,778, 779, 780, 781, 782, 783,
1024, 1025, 1026, 1027, 1028, 1029, 1030, 1031, 1032, 1033,1034, 1035, 1036, 1037, 1038, 1039,
1280, 1281, 1282, 1283, 1284, 1285, 1286, 1287, 1288, 1289,1290, 1291, 1292, 1293, 1294, 1295,
799, 798, 797, 796, 795, 794, 793, 792, 791, 790,789, 788, 787, 786, 785, 784,
1055, 1054, 1053, 1052, 1051, 1050, 1049, 1048, 1047, 1046,1045, 1044, 1043, 1042, 1041, 1040,
1311, 1310, 1309, 1308, 1307, 1306, 1305, 1304, 1303, 1302,1301, 1300, 1299, 1298, 1297, 1296,
800, 801, 802, 803, 804, 805, 806, 807, 808, 809,810, 811, 812, 813, 814, 815,
1056, 1057, 1058, 1059, 1060, 1061, 1062, 1063, 1064, 1065,1066, 1067, 1068, 1069, 1070, 1071,
1312, 1313, 1314, 1315, 1316, 1317, 1318, 1319, 1320, 1321,1322, 1323, 1324, 1325, 1326, 1327,
831, 830, 829, 828, 827, 826, 825, 824, 823, 822,821, 820, 819, 818, 817, 816,
1087, 1086, 1085, 1084, 1083, 1082, 1081, 1080, 1079, 1078,1077, 1076, 1075, 1074, 1073, 1072,
1343, 1342, 1341, 1340, 1339, 1338, 1337, 1336, 1335, 1334,1333, 1332, 1331, 1330, 1329, 1328,
832, 833, 834, 835, 836, 837, 838, 839, 840, 841,842, 843, 844, 845, 846, 847,
1088, 1089, 1090, 1091, 1092, 1093, 1094, 1095, 1096, 1097,1098, 1099, 1100, 1101, 1102, 1103,
1344, 1345, 1346, 1347, 1348, 1349, 1350, 1351, 1352, 1353,1354, 1355, 1356, 1357, 1358, 1359,
863, 862, 861, 860, 859, 858, 857, 856, 855, 854,853, 852, 851, 850, 849, 848,
1119, 1118, 1117, 1116, 1115, 1114, 1113, 1112, 1111, 1110,1109, 1108, 1107, 1106, 1105, 1104,
1375, 1374, 1373, 1372, 1371, 1370, 1369, 1368, 1367, 1366,1365, 1364, 1363, 1362, 1361, 1360,
864, 865, 866, 867, 868, 869, 870, 871, 872, 873,874, 875, 876, 877, 878, 879,
1120, 1121, 1122, 1123, 1124, 1125, 1126, 1127, 1128, 1129,1130, 1131, 1132, 1133, 1134, 1135,
1376, 1377, 1378, 1379, 1380, 1381, 1382, 1383, 1384, 1385,1386, 1387, 1388, 1389, 1390, 1391,
895, 894, 893, 892, 891, 890, 889, 888, 887, 886,885, 884, 883, 882, 881, 880,
1151, 1150, 1149, 1148, 1147, 1146, 1145, 1144, 1143, 1142,1141, 1140, 1139, 1138, 1137, 1136,
1407, 1406, 1405, 1404, 1403, 1402, 1401, 1400, 1399, 1398,1397, 1396, 1395, 1394, 1393, 1392,
896, 897, 898, 899, 900, 901, 902, 903, 904, 905,906, 907, 908, 909, 910, 911,
1152, 1153, 1154, 1155, 1156, 1157, 1158, 1159, 1160, 1161,1162, 1163, 1164, 1165, 1166, 1167,
1408, 1409, 1410, 1411, 1412, 1413, 1414, 1415, 1416, 1417,1418, 1419, 1420, 1421, 1422, 1423,
927, 926, 925, 924, 923, 922, 921, 920, 919, 918,917, 916, 915, 914, 913, 912,
1183, 1182, 1181, 1180, 1179, 1178, 1177, 1176, 1175, 1174,1173, 1172, 1171, 1170, 1169, 1168,
1439, 1438, 1437, 1436, 1435, 1434, 1433, 1432, 1431, 1430,1429, 1428, 1427, 1426, 1425, 1424,
928, 929, 930, 931, 932, 933, 934, 935, 936, 937,938, 939, 940, 941, 942, 943,
1184, 1185, 1186, 1187, 1188, 1189, 1190, 1191, 1192, 1193,1194, 1195, 1196, 1197, 1198, 1199,
1440, 1441, 1442, 1443, 1444, 1445, 1446, 1447, 1448, 1449,1450, 1451, 1452, 1453, 1454, 1455,
959, 958, 957, 956, 955, 954, 953, 952, 951, 950,949, 948, 947, 946, 945, 944,
1215, 1214, 1213, 1212, 1211, 1210, 1209, 1208, 1207, 1206,1205, 1204, 1203, 1202, 1201, 1200,
1471, 1470, 1469, 1468, 1467, 1466, 1465, 1464, 1463, 1462,1461, 1460, 1459, 1458, 1457, 1456,
960, 961, 962, 963, 964, 965, 966, 967, 968, 969,970, 971, 972, 973, 974, 975,
1216, 1217, 1218, 1219, 1220, 1221, 1222, 1223, 1224, 1225,1226, 1227, 1228, 1229, 1230, 1231,
1472, 1473, 1474, 1475, 1476, 1477, 1478, 1479, 1480, 1481,1482, 1483, 1484, 1485, 1486, 1487,
991, 990, 989, 988, 987, 986, 985, 984, 983, 982,981, 980, 979, 978, 977, 976,
1247, 1246, 1245, 1244, 1243, 1242, 1241, 1240, 1239, 1238,1237, 1236, 1235, 1234, 1233, 1232,
1503, 1502, 1501, 1500, 1499, 1498, 1497, 1496, 1495, 1494,1493, 1492, 1491, 1490, 1489, 1488,
992, 993, 994, 995, 996, 997, 998, 999, 1000, 1001,1002, 1003, 1004, 1005, 1006, 1007,
1248, 1249, 1250, 1251, 1252, 1253, 1254, 1255, 1256, 1257,1258, 1259, 1260, 1261, 1262, 1263,
1504, 1505, 1506, 1507, 1508, 1509, 1510, 1511, 1512, 1513,1514, 1515, 1516, 1517, 1518, 1519,
1023, 1022, 1021, 1020, 1019, 1018, 1017, 1016, 1015, 1014,1013, 1012, 1011, 1010, 1009, 1008,
1279, 1278, 1277, 1276, 1275, 1274, 1273, 1272, 1271, 1270,1269, 1268, 1267, 1266, 1265, 1264,
1535, 1534, 1533, 1532, 1531, 1530, 1529, 1528, 1527, 1526,1525, 1524, 1523, 1522, 1521, 1520
};

int RandBright[] = {
 21,   5,   2,  15,  10,   6,  16,  13,
  7,   4,  20,  18,  14,   0,  22,   1,
  3,  17,  23,  12,   8,  19,   9,  11};