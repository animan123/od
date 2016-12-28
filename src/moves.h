#ifndef MOVES_H
#define MOVES_H

#include "constants.h"
#include "board.h"

static const bitboard rook_moves[4][64] = {
{BITBOARD(72340172838076673), BITBOARD(144680345676153346), BITBOARD(289360691352306692), BITBOARD(578721382704613384), BITBOARD(1157442765409226768), BITBOARD(2314885530818453536), BITBOARD(4629771061636907072), BITBOARD(9259542123273814144), BITBOARD(72340172838076672), BITBOARD(144680345676153344), BITBOARD(289360691352306688), BITBOARD(578721382704613376), BITBOARD(1157442765409226752), BITBOARD(2314885530818453504), BITBOARD(4629771061636907008), BITBOARD(9259542123273814016), BITBOARD(72340172838076416), BITBOARD(144680345676152832), BITBOARD(289360691352305664), BITBOARD(578721382704611328), BITBOARD(1157442765409222656), BITBOARD(2314885530818445312), BITBOARD(4629771061636890624), BITBOARD(9259542123273781248), BITBOARD(72340172838010880), BITBOARD(144680345676021760), BITBOARD(289360691352043520), BITBOARD(578721382704087040), BITBOARD(1157442765408174080), BITBOARD(2314885530816348160), BITBOARD(4629771061632696320), BITBOARD(9259542123265392640), BITBOARD(72340172821233664), BITBOARD(144680345642467328), BITBOARD(289360691284934656), BITBOARD(578721382569869312), BITBOARD(1157442765139738624), BITBOARD(2314885530279477248), BITBOARD(4629771060558954496), BITBOARD(9259542121117908992), BITBOARD(72340168526266368), BITBOARD(144680337052532736), BITBOARD(289360674105065472), BITBOARD(578721348210130944), BITBOARD(1157442696420261888), BITBOARD(2314885392840523776), BITBOARD(4629770785681047552), BITBOARD(9259541571362095104), BITBOARD(72339069014638592), BITBOARD(144678138029277184), BITBOARD(289356276058554368), BITBOARD(578712552117108736), BITBOARD(1157425104234217472), BITBOARD(2314850208468434944), BITBOARD(4629700416936869888), BITBOARD(9259400833873739776), BITBOARD(72057594037927936), BITBOARD(144115188075855872), BITBOARD(288230376151711744), BITBOARD(576460752303423488), BITBOARD(1152921504606846976), BITBOARD(2305843009213693952), BITBOARD(4611686018427387904), BITBOARD(9223372036854775808)},
{BITBOARD(255), BITBOARD(254), BITBOARD(252), BITBOARD(248), BITBOARD(240), BITBOARD(224), BITBOARD(192), BITBOARD(128), BITBOARD(65280), BITBOARD(65024), BITBOARD(64512), BITBOARD(63488), BITBOARD(61440), BITBOARD(57344), BITBOARD(49152), BITBOARD(32768), BITBOARD(16711680), BITBOARD(16646144), BITBOARD(16515072), BITBOARD(16252928), BITBOARD(15728640), BITBOARD(14680064), BITBOARD(12582912), BITBOARD(8388608), BITBOARD(4278190080), BITBOARD(4261412864), BITBOARD(4227858432), BITBOARD(4160749568), BITBOARD(4026531840), BITBOARD(3758096384), BITBOARD(3221225472), BITBOARD(2147483648), BITBOARD(1095216660480), BITBOARD(1090921693184), BITBOARD(1082331758592), BITBOARD(1065151889408), BITBOARD(1030792151040), BITBOARD(962072674304), BITBOARD(824633720832), BITBOARD(549755813888), BITBOARD(280375465082880), BITBOARD(279275953455104), BITBOARD(277076930199552), BITBOARD(272678883688448), BITBOARD(263882790666240), BITBOARD(246290604621824), BITBOARD(211106232532992), BITBOARD(140737488355328), BITBOARD(71776119061217280), BITBOARD(71494644084506624), BITBOARD(70931694131085312), BITBOARD(69805794224242688), BITBOARD(67553994410557440), BITBOARD(63050394783186944), BITBOARD(54043195528445952), BITBOARD(36028797018963968), BITBOARD(18374686479671623680), BITBOARD(18302628885633695744), BITBOARD(18158513697557839872), BITBOARD(17870283321406128128), BITBOARD(17293822569102704640), BITBOARD(16140901064495857664), BITBOARD(13835058055282163712), BITBOARD(9223372036854775808)},
{BITBOARD(1), BITBOARD(2), BITBOARD(4), BITBOARD(8), BITBOARD(16), BITBOARD(32), BITBOARD(64), BITBOARD(128), BITBOARD(257), BITBOARD(514), BITBOARD(1028), BITBOARD(2056), BITBOARD(4112), BITBOARD(8224), BITBOARD(16448), BITBOARD(32896), BITBOARD(65793), BITBOARD(131586), BITBOARD(263172), BITBOARD(526344), BITBOARD(1052688), BITBOARD(2105376), BITBOARD(4210752), BITBOARD(8421504), BITBOARD(16843009), BITBOARD(33686018), BITBOARD(67372036), BITBOARD(134744072), BITBOARD(269488144), BITBOARD(538976288), BITBOARD(1077952576), BITBOARD(2155905152), BITBOARD(4311810305), BITBOARD(8623620610), BITBOARD(17247241220), BITBOARD(34494482440), BITBOARD(68988964880), BITBOARD(137977929760), BITBOARD(275955859520), BITBOARD(551911719040), BITBOARD(1103823438081), BITBOARD(2207646876162), BITBOARD(4415293752324), BITBOARD(8830587504648), BITBOARD(17661175009296), BITBOARD(35322350018592), BITBOARD(70644700037184), BITBOARD(141289400074368), BITBOARD(282578800148737), BITBOARD(565157600297474), BITBOARD(1130315200594948), BITBOARD(2260630401189896), BITBOARD(4521260802379792), BITBOARD(9042521604759584), BITBOARD(18085043209519168), BITBOARD(36170086419038336), BITBOARD(72340172838076673), BITBOARD(144680345676153346), BITBOARD(289360691352306692), BITBOARD(578721382704613384), BITBOARD(1157442765409226768), BITBOARD(2314885530818453536), BITBOARD(4629771061636907072), BITBOARD(9259542123273814144)},
{BITBOARD(1), BITBOARD(3), BITBOARD(7), BITBOARD(15), BITBOARD(31), BITBOARD(63), BITBOARD(127), BITBOARD(255), BITBOARD(256), BITBOARD(768), BITBOARD(1792), BITBOARD(3840), BITBOARD(7936), BITBOARD(16128), BITBOARD(32512), BITBOARD(65280), BITBOARD(65536), BITBOARD(196608), BITBOARD(458752), BITBOARD(983040), BITBOARD(2031616), BITBOARD(4128768), BITBOARD(8323072), BITBOARD(16711680), BITBOARD(16777216), BITBOARD(50331648), BITBOARD(117440512), BITBOARD(251658240), BITBOARD(520093696), BITBOARD(1056964608), BITBOARD(2130706432), BITBOARD(4278190080), BITBOARD(4294967296), BITBOARD(12884901888), BITBOARD(30064771072), BITBOARD(64424509440), BITBOARD(133143986176), BITBOARD(270582939648), BITBOARD(545460846592), BITBOARD(1095216660480), BITBOARD(1099511627776), BITBOARD(3298534883328), BITBOARD(7696581394432), BITBOARD(16492674416640), BITBOARD(34084860461056), BITBOARD(69269232549888), BITBOARD(139637976727552), BITBOARD(280375465082880), BITBOARD(281474976710656), BITBOARD(844424930131968), BITBOARD(1970324836974592), BITBOARD(4222124650659840), BITBOARD(8725724278030336), BITBOARD(17732923532771328), BITBOARD(35747322042253312), BITBOARD(71776119061217280), BITBOARD(72057594037927936), BITBOARD(216172782113783808), BITBOARD(504403158265495552), BITBOARD(1080863910568919040), BITBOARD(2233785415175766016), BITBOARD(4539628424389459968), BITBOARD(9151314442816847872), BITBOARD(18374686479671623680)}
};

static const bitboard bishop_moves[4][64] = {
{BITBOARD(1), BITBOARD(258), BITBOARD(66052), BITBOARD(16909320), BITBOARD(4328785936), BITBOARD(1108169199648), BITBOARD(283691315109952), BITBOARD(72624976668147840), BITBOARD(256), BITBOARD(66048), BITBOARD(16909312), BITBOARD(4328785920), BITBOARD(1108169199616), BITBOARD(283691315109888), BITBOARD(72624976668147712), BITBOARD(145249953336295424), BITBOARD(65536), BITBOARD(16908288), BITBOARD(4328783872), BITBOARD(1108169195520), BITBOARD(283691315101696), BITBOARD(72624976668131328), BITBOARD(145249953336262656), BITBOARD(290499906672525312), BITBOARD(16777216), BITBOARD(4328521728), BITBOARD(1108168671232), BITBOARD(283691314053120), BITBOARD(72624976666034176), BITBOARD(145249953332068352), BITBOARD(290499906664136704), BITBOARD(580999813328273408), BITBOARD(4294967296), BITBOARD(1108101562368), BITBOARD(283691179835392), BITBOARD(72624976397598720), BITBOARD(145249952795197440), BITBOARD(290499905590394880), BITBOARD(580999811180789760), BITBOARD(1161999622361579520), BITBOARD(1099511627776), BITBOARD(283673999966208), BITBOARD(72624942037860352), BITBOARD(145249884075720704), BITBOARD(290499768151441408), BITBOARD(580999536302882816), BITBOARD(1161999072605765632), BITBOARD(2323998145211531264), BITBOARD(281474976710656), BITBOARD(72620543991349248), BITBOARD(145241087982698496), BITBOARD(290482175965396992), BITBOARD(580964351930793984), BITBOARD(1161928703861587968), BITBOARD(2323857407723175936), BITBOARD(4647714815446351872), BITBOARD(72057594037927936), BITBOARD(144115188075855872), BITBOARD(288230376151711744), BITBOARD(576460752303423488), BITBOARD(1152921504606846976), BITBOARD(2305843009213693952), BITBOARD(4611686018427387904), BITBOARD(9223372036854775808), },
{BITBOARD(9241421688590303745), BITBOARD(36099303471055874), BITBOARD(141012904183812), BITBOARD(550831656968), BITBOARD(2151686160), BITBOARD(8405024), BITBOARD(32832), BITBOARD(128), BITBOARD(4620710844295151872), BITBOARD(9241421688590303744), BITBOARD(36099303471055872), BITBOARD(141012904183808), BITBOARD(550831656960), BITBOARD(2151686144), BITBOARD(8404992), BITBOARD(32768), BITBOARD(2310355422147575808), BITBOARD(4620710844295151616), BITBOARD(9241421688590303232), BITBOARD(36099303471054848), BITBOARD(141012904181760), BITBOARD(550831652864), BITBOARD(2151677952), BITBOARD(8388608), BITBOARD(1155177711073755136), BITBOARD(2310355422147510272), BITBOARD(4620710844295020544), BITBOARD(9241421688590041088), BITBOARD(36099303470530560), BITBOARD(141012903133184), BITBOARD(550829555712), BITBOARD(2147483648), BITBOARD(577588855528488960), BITBOARD(1155177711056977920), BITBOARD(2310355422113955840), BITBOARD(4620710844227911680), BITBOARD(9241421688455823360), BITBOARD(36099303202095104), BITBOARD(141012366262272), BITBOARD(549755813888), BITBOARD(288794425616760832), BITBOARD(577588851233521664), BITBOARD(1155177702467043328), BITBOARD(2310355404934086656), BITBOARD(4620710809868173312), BITBOARD(9241421619736346624), BITBOARD(36099165763141632), BITBOARD(140737488355328), BITBOARD(144396663052566528), BITBOARD(288793326105133056), BITBOARD(577586652210266112), BITBOARD(1155173304420532224), BITBOARD(2310346608841064448), BITBOARD(4620693217682128896), BITBOARD(9241386435364257792), BITBOARD(36028797018963968), BITBOARD(72057594037927936), BITBOARD(144115188075855872), BITBOARD(288230376151711744), BITBOARD(576460752303423488), BITBOARD(1152921504606846976), BITBOARD(2305843009213693952), BITBOARD(4611686018427387904), BITBOARD(9223372036854775808), },
{BITBOARD(1), BITBOARD(2), BITBOARD(4), BITBOARD(8), BITBOARD(16), BITBOARD(32), BITBOARD(64), BITBOARD(128), BITBOARD(258), BITBOARD(516), BITBOARD(1032), BITBOARD(2064), BITBOARD(4128), BITBOARD(8256), BITBOARD(16512), BITBOARD(32768), BITBOARD(66052), BITBOARD(132104), BITBOARD(264208), BITBOARD(528416), BITBOARD(1056832), BITBOARD(2113664), BITBOARD(4227072), BITBOARD(8388608), BITBOARD(16909320), BITBOARD(33818640), BITBOARD(67637280), BITBOARD(135274560), BITBOARD(270549120), BITBOARD(541097984), BITBOARD(1082130432), BITBOARD(2147483648), BITBOARD(4328785936), BITBOARD(8657571872), BITBOARD(17315143744), BITBOARD(34630287488), BITBOARD(69260574720), BITBOARD(138521083904), BITBOARD(277025390592), BITBOARD(549755813888), BITBOARD(1108169199648), BITBOARD(2216338399296), BITBOARD(4432676798592), BITBOARD(8865353596928), BITBOARD(17730707128320), BITBOARD(35461397479424), BITBOARD(70918499991552), BITBOARD(140737488355328), BITBOARD(283691315109952), BITBOARD(567382630219904), BITBOARD(1134765260439552), BITBOARD(2269530520813568), BITBOARD(4539061024849920), BITBOARD(9078117754732544), BITBOARD(18155135997837312), BITBOARD(36028797018963968), BITBOARD(72624976668147840), BITBOARD(145249953336295424), BITBOARD(290499906672525312), BITBOARD(580999813328273408), BITBOARD(1161999622361579520), BITBOARD(2323998145211531264), BITBOARD(4647714815446351872), BITBOARD(9223372036854775808), },
{BITBOARD(1), BITBOARD(2), BITBOARD(4), BITBOARD(8), BITBOARD(16), BITBOARD(32), BITBOARD(64), BITBOARD(128), BITBOARD(256), BITBOARD(513), BITBOARD(1026), BITBOARD(2052), BITBOARD(4104), BITBOARD(8208), BITBOARD(16416), BITBOARD(32832), BITBOARD(65536), BITBOARD(131328), BITBOARD(262657), BITBOARD(525314), BITBOARD(1050628), BITBOARD(2101256), BITBOARD(4202512), BITBOARD(8405024), BITBOARD(16777216), BITBOARD(33619968), BITBOARD(67240192), BITBOARD(134480385), BITBOARD(268960770), BITBOARD(537921540), BITBOARD(1075843080), BITBOARD(2151686160), BITBOARD(4294967296), BITBOARD(8606711808), BITBOARD(17213489152), BITBOARD(34426978560), BITBOARD(68853957121), BITBOARD(137707914242), BITBOARD(275415828484), BITBOARD(550831656968), BITBOARD(1099511627776), BITBOARD(2203318222848), BITBOARD(4406653222912), BITBOARD(8813306511360), BITBOARD(17626613022976), BITBOARD(35253226045953), BITBOARD(70506452091906), BITBOARD(141012904183812), BITBOARD(281474976710656), BITBOARD(564049465049088), BITBOARD(1128103225065472), BITBOARD(2256206466908160), BITBOARD(4512412933881856), BITBOARD(9024825867763968), BITBOARD(18049651735527937), BITBOARD(36099303471055874), BITBOARD(72057594037927936), BITBOARD(144396663052566528), BITBOARD(288794425616760832), BITBOARD(577588855528488960), BITBOARD(1155177711073755136), BITBOARD(2310355422147575808), BITBOARD(4620710844295151872), BITBOARD(9241421688590303745), },
};

static const bitboard king_moves[64] = {
BITBOARD(770), BITBOARD(1797), BITBOARD(3594), BITBOARD(7188), BITBOARD(14376), BITBOARD(28752), BITBOARD(57504), BITBOARD(49216), BITBOARD(197123), BITBOARD(460039), BITBOARD(920078), BITBOARD(1840156), BITBOARD(3680312), BITBOARD(7360624), BITBOARD(14721248), BITBOARD(12599488), BITBOARD(50463488), BITBOARD(117769984), BITBOARD(235539968), BITBOARD(471079936), BITBOARD(942159872), BITBOARD(1884319744), BITBOARD(3768639488), BITBOARD(3225468928), BITBOARD(12918652928), BITBOARD(30149115904), BITBOARD(60298231808), BITBOARD(120596463616), BITBOARD(241192927232), BITBOARD(482385854464), BITBOARD(964771708928), BITBOARD(825720045568), BITBOARD(3307175149568), BITBOARD(7718173671424), BITBOARD(15436347342848), BITBOARD(30872694685696), BITBOARD(61745389371392), BITBOARD(123490778742784), BITBOARD(246981557485568), BITBOARD(211384331665408), BITBOARD(846636838289408), BITBOARD(1975852459884544), BITBOARD(3951704919769088), BITBOARD(7903409839538176), BITBOARD(15806819679076352), BITBOARD(31613639358152704), BITBOARD(63227278716305408), BITBOARD(54114388906344448), BITBOARD(216739030602088448), BITBOARD(505818229730443264), BITBOARD(1011636459460886528), BITBOARD(2023272918921773056), BITBOARD(4046545837843546112), BITBOARD(8093091675687092224), BITBOARD(16186183351374184448), BITBOARD(13853283560024178688), BITBOARD(144959613005987840), BITBOARD(362258295026614272), BITBOARD(724516590053228544), BITBOARD(1449033180106457088), BITBOARD(2898066360212914176), BITBOARD(5796132720425828352), BITBOARD(11592265440851656704), BITBOARD(4665729213955833856)};

static const bitboard knight_moves[64] = {
BITBOARD(132096), BITBOARD(329728), BITBOARD(659712), BITBOARD(1319424), BITBOARD(2638848), BITBOARD(5277696), BITBOARD(10489856), BITBOARD(4202496), BITBOARD(33816580), BITBOARD(84410376), BITBOARD(168886289), BITBOARD(337772578), BITBOARD(675545156), BITBOARD(1351090312), BITBOARD(2685403152), BITBOARD(1075839008), BITBOARD(8657044482), BITBOARD(21609056261), BITBOARD(43234889994), BITBOARD(86469779988), BITBOARD(172939559976), BITBOARD(345879119952), BITBOARD(687463207072), BITBOARD(275414786112), BITBOARD(2216203387392), BITBOARD(5531918402816), BITBOARD(11068131838464), BITBOARD(22136263676928), BITBOARD(44272527353856), BITBOARD(88545054707712), BITBOARD(175990581010432), BITBOARD(70506185244672), BITBOARD(567348067172352), BITBOARD(1416171111120896), BITBOARD(2833441750646784), BITBOARD(5666883501293568), BITBOARD(11333767002587136), BITBOARD(22667534005174272), BITBOARD(45053588738670592), BITBOARD(18049583422636032), BITBOARD(145241105196122112), BITBOARD(362539804446949376), BITBOARD(725361088165576704), BITBOARD(1450722176331153408), BITBOARD(2901444352662306816), BITBOARD(5802888705324613632), BITBOARD(11533718717099671552), BITBOARD(4620693356194824192), BITBOARD(288234782788157440), BITBOARD(576469569871282176), BITBOARD(1224997833292120064), BITBOARD(2449995666584240128), BITBOARD(4899991333168480256), BITBOARD(9799982666336960512), BITBOARD(1152939783987658752), BITBOARD(2305878468463689728), BITBOARD(1128098930098176), BITBOARD(2257297371824128), BITBOARD(4796069720358912), BITBOARD(9592139440717824), BITBOARD(19184278881435648), BITBOARD(38368557762871296), BITBOARD(4679521487814656), BITBOARD(9077567998918656)};

static const bitboard white_pawn_push_moves[64] = {
BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(16842752), BITBOARD(33685504), BITBOARD(67371008), BITBOARD(134742016), BITBOARD(269484032), BITBOARD(538968064), BITBOARD(1077936128), BITBOARD(2155872256), BITBOARD(16777216), BITBOARD(33554432), BITBOARD(67108864), BITBOARD(134217728), BITBOARD(268435456), BITBOARD(536870912), BITBOARD(1073741824), BITBOARD(2147483648), BITBOARD(4294967296), BITBOARD(8589934592), BITBOARD(17179869184), BITBOARD(34359738368), BITBOARD(68719476736), BITBOARD(137438953472), BITBOARD(274877906944), BITBOARD(549755813888), BITBOARD(1099511627776), BITBOARD(2199023255552), BITBOARD(4398046511104), BITBOARD(8796093022208), BITBOARD(17592186044416), BITBOARD(35184372088832), BITBOARD(70368744177664), BITBOARD(140737488355328), BITBOARD(281474976710656), BITBOARD(562949953421312), BITBOARD(1125899906842624), BITBOARD(2251799813685248), BITBOARD(4503599627370496), BITBOARD(9007199254740992), BITBOARD(18014398509481984), BITBOARD(36028797018963968), BITBOARD(72057594037927936), BITBOARD(144115188075855872), BITBOARD(288230376151711744), BITBOARD(576460752303423488), BITBOARD(1152921504606846976), BITBOARD(2305843009213693952), BITBOARD(4611686018427387904), BITBOARD(9223372036854775808), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0)};

static const bitboard black_pawn_push_moves[64] = {
BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(1), BITBOARD(2), BITBOARD(4), BITBOARD(8), BITBOARD(16), BITBOARD(32), BITBOARD(64), BITBOARD(128), BITBOARD(256), BITBOARD(512), BITBOARD(1024), BITBOARD(2048), BITBOARD(4096), BITBOARD(8192), BITBOARD(16384), BITBOARD(32768), BITBOARD(65536), BITBOARD(131072), BITBOARD(262144), BITBOARD(524288), BITBOARD(1048576), BITBOARD(2097152), BITBOARD(4194304), BITBOARD(8388608), BITBOARD(16777216), BITBOARD(33554432), BITBOARD(67108864), BITBOARD(134217728), BITBOARD(268435456), BITBOARD(536870912), BITBOARD(1073741824), BITBOARD(2147483648), BITBOARD(4294967296), BITBOARD(8589934592), BITBOARD(17179869184), BITBOARD(34359738368), BITBOARD(68719476736), BITBOARD(137438953472), BITBOARD(274877906944), BITBOARD(549755813888), BITBOARD(1103806595072), BITBOARD(2207613190144), BITBOARD(4415226380288), BITBOARD(8830452760576), BITBOARD(17660905521152), BITBOARD(35321811042304), BITBOARD(70643622084608), BITBOARD(141287244169216), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0)};

static const bitboard white_pawn_capture_moves[64] = {
BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(131072), BITBOARD(327680), BITBOARD(655360), BITBOARD(1310720), BITBOARD(2621440), BITBOARD(5242880), BITBOARD(10485760), BITBOARD(4194304), BITBOARD(33554432), BITBOARD(83886080), BITBOARD(167772160), BITBOARD(335544320), BITBOARD(671088640), BITBOARD(1342177280), BITBOARD(2684354560), BITBOARD(1073741824), BITBOARD(8589934592), BITBOARD(21474836480), BITBOARD(42949672960), BITBOARD(85899345920), BITBOARD(171798691840), BITBOARD(343597383680), BITBOARD(687194767360), BITBOARD(274877906944), BITBOARD(2199023255552), BITBOARD(5497558138880), BITBOARD(10995116277760), BITBOARD(21990232555520), BITBOARD(43980465111040), BITBOARD(87960930222080), BITBOARD(175921860444160), BITBOARD(70368744177664), BITBOARD(562949953421312), BITBOARD(1407374883553280), BITBOARD(2814749767106560), BITBOARD(5629499534213120), BITBOARD(11258999068426240), BITBOARD(22517998136852480), BITBOARD(45035996273704960), BITBOARD(18014398509481984), BITBOARD(144115188075855872), BITBOARD(360287970189639680), BITBOARD(720575940379279360), BITBOARD(1441151880758558720), BITBOARD(2882303761517117440), BITBOARD(5764607523034234880), BITBOARD(11529215046068469760), BITBOARD(4611686018427387904), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0)};

static const bitboard black_pawn_capture_moves[64] = {
BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(2), BITBOARD(5), BITBOARD(10), BITBOARD(20), BITBOARD(40), BITBOARD(80), BITBOARD(160), BITBOARD(64), BITBOARD(512), BITBOARD(1280), BITBOARD(2560), BITBOARD(5120), BITBOARD(10240), BITBOARD(20480), BITBOARD(40960), BITBOARD(16384), BITBOARD(131072), BITBOARD(327680), BITBOARD(655360), BITBOARD(1310720), BITBOARD(2621440), BITBOARD(5242880), BITBOARD(10485760), BITBOARD(4194304), BITBOARD(33554432), BITBOARD(83886080), BITBOARD(167772160), BITBOARD(335544320), BITBOARD(671088640), BITBOARD(1342177280), BITBOARD(2684354560), BITBOARD(1073741824), BITBOARD(8589934592), BITBOARD(21474836480), BITBOARD(42949672960), BITBOARD(85899345920), BITBOARD(171798691840), BITBOARD(343597383680), BITBOARD(687194767360), BITBOARD(274877906944), BITBOARD(2199023255552), BITBOARD(5497558138880), BITBOARD(10995116277760), BITBOARD(21990232555520), BITBOARD(43980465111040), BITBOARD(87960930222080), BITBOARD(175921860444160), BITBOARD(70368744177664), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0), BITBOARD(0)};

/* move sanity check */
int move_is_sane (board b, int from, int to);
#define MOVE_IS_SANE(x, y, z) (move_is_sane (x, y, z))

/* is move a capture? */
int move_is_capture (board b, int from, int to);
#define MOVE_IS_CAPTURE(x, y, z) (move_is_capture(x, y, z))

/* move on same board without creating a new board */
void move_on_same_board (board &b, int from, int to);
#define MOVE_ON_SAME_BOARD(x, y, z) (move_on_same_board(x, y, z))

#endif
