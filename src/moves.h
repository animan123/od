#ifndef MOVES_H
#define MOVES_H

#include "constants.h"

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

#endif
