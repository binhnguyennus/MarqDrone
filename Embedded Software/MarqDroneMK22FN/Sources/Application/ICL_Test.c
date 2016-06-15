/*
 * ICL_Test.c
 *
 *  Created on: Mar 20, 2016
 *      Author: Z
 */

#define POINTS 180

float X_ICL[POINTS]=
{
		-72.52115415	,
		-144.3261442	,
		-216.373919	,
		-290.0367424	,
		-363.0983395	,
		-436.8224624	,
		-518.9224661	,
		-595.9279633	,
		-672.7299968	,
		-754.4964362	,
		-837.9949495	,
		-923.2921798	,
		-1012.198978	,
		-1099.971872	,
		-1197.5	,
		-1293.532924	,
		-1394.627101	,
		-1490.035615	,
		-1601.335497	,
		-1718.814068	,
		-1855.499171	,
		-1976.303064	,
		-2086.804761	,
		0	,
		0	,
		0	,
		0	,
		-2965.467397	,
		-3007.178549	,
		0	,
		0	,
		-3688.650766	,
		-3681.588194	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		-3646.167029	,
		-3674.758403	,
		-3692.982114	,
		-3196.051865	,
		-3650	,
		-3654.772254	,
		-3641.108783	,
		-3403.253926	,
		-3584.770409	,
		-3661.515226	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		-3739.78849	,
		-3740.085565	,
		-3750.143176	,
		0	,
		0	,
		0	,
		0	,
		-2637.71285	,
		0	,
		-132.9828787	,
		-2076.057511	,
		-1935.366639	,
		-1776.819293	,
		-1633	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		367.2374375	,
		428.3404509	,
		484.8476642	,
		543.1279876	,
		595.9990901	,
		641.8304228	,
		684.7357313	,
		725.8030361	,
		0	,
		0	,
		0	,
		1038.028756	,
		1026.923341	,
		1016.889999	,
		1021.762436	,
		1021.147805	,
		1020.023837	,
		1017.365266	,
		1016.540976	,
		1014.957851	,
		1014.507311	,
		1013.083914	,
		1011.721379	,
		1008.919595	,
		1007.443203	,
		0	,
		1003.986458	,
		1004.140114	,
		1002.652026	,
		1001.462512	,
		999.7121638	,
		998.4343023	,
		996.7324051	,
		994.6558305	,
		994.229141	,
		992.5328516	,
		993.5737941	,
		990.3963096	,
		989	,
		988.3975279	,
		987.5884098	,
		985.5711983	,
		983.3361923	,
		982.8381375	,
		981.0820435	,
		979.9986835	,
		978.5644065	,
		976.7350422	,
		976.340633	,
		974.4702311	,
		973.8394578	,
		973.3939521	,
		971.2423521	,
		970.8144776	,
		969.3189739	,
		967.4868472	,
		968.3933423	,
		966.8891947	,
		964.4499539	,
		963.1156938	,
		963.1959927	,
		960.017868	,
		958.1950283	,
		964.1814145	,
		953.0439638	,
		953.3876792	,
		952.3055146	,
		951.2050793	,
		950	,
		956.3135734	,
		947.7584194	,
		943.6290119	,
		853.7284264	,
		764.4150203	,
		678.2923027	,
		597.8574248	,
		518.6805442	,
		442.6439898	,
		367.4395439	,
		290.7326079	,
		220.9731713	,
		146.5583513	,
		73.21914408	,
		5.08437E-13
};

float Y_ICL[POINTS]=
{
		2076.734139	,
		2063.96002	,
		2058.660323	,
		2063.718655	,
		2059.233012	,
		2055.088109	,
		2081.284333	,
		2078.247787	,
		2070.450036	,
		2072.961921	,
		2074.110283	,
		2073.748189	,
		2075.315453	,
		2068.74621	,
		2074.130842	,
		2070.085403	,
		2067.619706	,
		2050.858081	,
		2049.61597	,
		2048.402841	,
		2060.740601	,
		2046.521732	,
		2015.203933	,
		0	,
		0	,
		0	,
		0	,
		2000.233016	,
		1879.093711	,
		0	,
		0	,
		1799.075186	,
		1639.148672	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		512.4353577	,
		386.2326718	,
		258.2384658	,
		111.6085905	,
		2.2359E-13	,
		-127.6274594	,
		-254.6111292	,
		-357.6964013	,
		-503.8066255	,
		-645.6239246	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		-2522.519188	,
		-2717.331221	,
		-2929.932961	,
		0	,
		0	,
		0	,
		0	,
		-2929.476902	,
		0	,
		-170.2103228	,
		-2857.448024	,
		-2869.299039	,
		-2843.505266	,
		-2828.438969	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		-1472.908912	,
		-1493.800675	,
		-1492.207674	,
		-1492.231882	,
		-1475.149513	,
		-1441.574732	,
		-1403.9163	,
		-1365.036979	,
		0	,
		0	,
		0	,
		-1428.724012	,
		-1314.401937	,
		-1211.882309	,
		-1134.782149	,
		-1057.429506	,
		-985.0255693	,
		-916.0398001	,
		-852.9791581	,
		-792.9719802	,
		-737.0827064	,
		-683.333728	,
		-632.1936822	,
		-582.5	,
		-535.6670531	,
		0	,
		-447.0035707	,
		-405.6989407	,
		-364.9354929	,
		-325.3948951	,
		-286.66285	,
		-248.9376306	,
		-211.8620129	,
		-175.3846594	,
		-139.7297934	,
		-104.3194063	,
		-69.47744785	,
		-34.58540123	,
		-1.81751E-13	,
		34.51560224	,
		69.05890901	,
		103.5877071	,
		138.1988893	,
		173.3008813	,
		208.5354259	,
		244.3411146	,
		280.5988282	,
		317.3604532	,
		355.3589289	,
		393.7115297	,
		433.5812615	,
		474.755952	,
		516.4187191	,
		560.5	,
		605.697719	,
		652.5781184	,
		703.578947	,
		755.4166302	,
		809.2696006	,
		867.1932658	,
		930.147558	,
		994.1276041	,
		1064.18339	,
		1149.066665	,
		1219.840647	,
		1312.225565	,
		1411.850986	,
		1522.246333	,
		1645.448267	,
		1798.564247	,
		1943.192728	,
		2119.425462	,
		2113.052005	,
		2100.213007	,
		2087.569053	,
		2084.976618	,
		2080.314037	,
		2082.476242	,
		2083.853205	,
		2068.669996	,
		2102.419287	,
		2095.88207	,
		2096.721955	,
		2075
};


float X_ICL2[POINTS]=
{
		-72.27685767	,
		-144.2563877	,
		-216.5829759	,
		-290.0367424	,
		-362.577395	,
		-435.1591689	,
		-518.6805442	,
		-594.8254139	,
		-675.5111497	,
		-753.8123959	,
		-837.2457363	,
		-919.2248134	,
		-1010.883864	,
		-1100.441343	,
		-1196.5	,
		-1291.943166	,
		-1390.712751	,
		-1489.447829	,
		-1605.645128	,
		-1709.172254	,
		-1852.153518	,
		-1987.417598	,
		-2114.859013	,
		0	,
		0	,
		0	,
		-2766.838121	,
		-2975.415848	,
		-3214.950333	,
		0	,
		-3560.927642	,
		-3652.699004	,
		-3695.291376	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		-3656.06971	,
		-3694.648841	,
		-3698.967498	,
		-3198.050646	,
		-3645	,
		-3659.769209	,
		-3616.169682	,
		-3436.073148	,
		-3611.507647	,
		-3666.439264	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		-3764.659617	,
		-3762.738041	,
		-3750.143176	,
		0	,
		0	,
		0	,
		0	,
		-2580.836749	,
		0	,
		-132.9828787	,
		-2051.958316	,
		0	,
		-1771.5201	,
		-1620	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		367.4793594	,
		427.5135389	,
		487.3198001	,
		543.1279876	,
		595.6244835	,
		642.2371594	,
		683.4206178	,
		725.8030361	,
		0	,
		0	,
		0	,
		1040.967682	,
		1026.923341	,
		1016.889999	,
		1023.769828	,
		1021.147805	,
		1022.181856	,
		1018.851556	,
		1017.30702	,
		1014.957851	,
		1014.507311	,
		1012.254876	,
		1012.569427	,
		1008.919595	,
		1007.443203	,
		0	,
		1004.900003	,
		1004.140114	,
		1002.652026	,
		1001.462512	,
		998.7509021	,
		997.4640066	,
		996.7324051	,
		995.6406383	,
		994.229141	,
		992.5328516	,
		992.57623	,
		991.3957004	,
		989	,
		988.3975279	,
		987.5884098	,
		984.5766764	,
		983.3361923	,
		982.8381375	,
		981.0820435	,
		979.9986835	,
		978.5644065	,
		976.7350422	,
		976.340633	,
		976.3245989	,
		973.8394578	,
		973.3939521	,
		971.2423521	,
		970.8144776	,
		969.3189739	,
		967.4868472	,
		967.5843253	,
		966.1011839	,
		965.2159983	,
		963.8588386	,
		962.4766529	,
		960.017868	,
		958.8641589	,
		966.752565	,
		954.8909482	,
		953.3876792	,
		951.1871288	,
		950.67516	,
		950.5	,
		946.9241421	,
		950.3886462	,
		939.5616455	,
		858.2237055	,
		766.4671412	,
		678.9103366	,
		596.479238	,
		519.164388	,
		442.8519014	,
		367.6131921	,
		296.1603588	,
		225.9905376	,
		146.9768902	,
		73.0446466	,
		5.08437E-13
};

float Y_ICL2[POINTS]=
{
		2069.738403	,
		2062.962456	,
		2060.649367	,
		2063.718655	,
		2056.278588	,
		2047.262928	,
		2080.314037	,
		2074.40274	,
		2079.009545	,
		2071.082536	,
		2072.255915	,
		2064.612734	,
		2072.619071	,
		2069.629158	,
		2072.398791	,
		2067.541258	,
		2061.816443	,
		2050.049064	,
		2055.132045	,
		2036.912174	,
		2057.024877	,
		2058.031169	,
		2042.295609	,
		0	,
		0	,
		0	,
		2010.225563	,
		2006.943331	,
		2008.923931	,
		0	,
		1893.378813	,
		1781.540341	,
		1645.249721	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		513.8270887	,
		388.323241	,
		258.6570046	,
		111.6783894	,
		2.23283E-13	,
		-127.8019569	,
		-252.8672173	,
		-361.1458406	,
		-507.5642992	,
		-646.4921655	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		-2539.294975	,
		-2733.789208	,
		-2929.932961	,
		0	,
		0	,
		0	,
		0	,
		-2866.309592	,
		0	,
		-170.2103228	,
		-2824.278327	,
		0	,
		-2835.024785	,
		-2805.922308	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		0	,
		-1473.879208	,
		-1490.91689	,
		-1499.816126	,
		-1492.231882	,
		-1474.222329	,
		-1442.488278	,
		-1401.219918	,
		-1365.036979	,
		0	,
		0	,
		0	,
		-1432.769097	,
		-1314.401937	,
		-1211.882309	,
		-1137.011583	,
		-1057.429506	,
		-987.1095444	,
		-917.3780613	,
		-853.6219457	,
		-792.9719802	,
		-737.0827064	,
		-682.7745351	,
		-632.7236015	,
		-582.5	,
		-535.6670531	,
		0	,
		-447.4103074	,
		-405.6989407	,
		-364.9354929	,
		-325.3948951	,
		-286.3872127	,
		-248.6957087	,
		-211.8620129	,
		-175.5583076	,
		-139.7297934	,
		-104.3194063	,
		-69.40769138	,
		-34.62030073	,
		-1.81751E-13	,
		34.51560224	,
		69.05890901	,
		103.4831786	,
		138.1988893	,
		173.3008813	,
		208.5354259	,
		244.3411146	,
		280.5988282	,
		317.3604532	,
		355.3589289	,
		394.4607429	,
		433.5812615	,
		474.755952	,
		516.4187191	,
		560.5	,
		605.697719	,
		652.5781184	,
		702.9911617	,
		754.8009687	,
		809.9123882	,
		867.8623964	,
		929.4528997	,
		994.1276041	,
		1064.926535	,
		1152.130842	,
		1222.204679	,
		1312.225565	,
		1410.192911	,
		1521.398285	,
		1646.314293	,
		1780.905295	,
		1948.585492	,
		2110.290007	,
		2124.178211	,
		2105.851163	,
		2089.471166	,
		2080.17031	,
		2082.254629	,
		2083.45439	,
		2084.838013	,
		2107.29045	,
		2150.156338	,
		2101.867454	,
		2091.725001	,
		2075
};


