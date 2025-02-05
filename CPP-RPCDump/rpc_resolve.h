#pragma once
#include <unordered_map>

std::unordered_map<std::wstring, LPCWSTR> KNOWN_ENDPOINTS = {
    { L"0361AE94-0316-4C6C-8AD8-C594375800E2", L"(C:\\Windows\\System32\\psmsrv.dll)" },
    { L"0497B57D-2E66-424F-A0C6-157CD5D41700", L"(C:\\Windows\\System32\\appinfo.dll)" },
    { L"06BBA54A-BE05-49F9-B0A0-30F790261023", L"(C:\\Windows\\System32\\wscsvc.dll)" },
    { L"0767A036-0D22-48AA-BA69-B619480F38CB", L"(C:\\Windows\\System32\\pcasvc.dll)" },
    { L"0820A0D0-1AAE-49F9-ACF9-3E3D3FE303CB", L"(C:\\Windows\\System32\\webplatstorageserver.dll)" },
    { L"082A3471-31B6-422A-B931-A54401960C62", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"085B0334-E454-4D91-9B8C-4134F9E793F3", L"(C:\\Windows\\System32\\psmsrv.dll)" },
    { L"09704557-82C0-416B-B6E4-C85B8F789803", L"(C:\\Windows\\System32\\audiosrv.dll)" },
    { L"0A74EF1C-41A4-4E06-83AE-DC74FB1CDD53", L"(C:\\Windows\\System32\\schedsvc.dll)" },
    { L"0B0A6584-9E0F-11CF-A3CF-00805F68CB1B", L"(C:\\Windows\\System32\\rpcepmap.dll)" },
    { L"0B1C2170-5732-4E0E-8CD3-D9B16F3B84D7", L"[MS-RAA](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-raa/0cae6068-686e-4f85-b064-7ba70d47da44)" },
    { L"0B6EDBFA-4A24-4FC6-8A23-942B1ECA65D1", L"[MS-PAN](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-pan/c146c9d5-6b02-43b6-a7fc-222a958af378)" },
    { L"0C53AA2E-FB1C-49C5-BFB6-C54F8E5857CD", L"(C:\\Windows\\System32\\SyncController.dll)" },
    { L"0D3C7F20-1C8D-4654-A1B3-51563B298BDA", L"(C:\\Windows\\System32\\usermgr.dll)" },
    { L"0D3E2735-CEA0-4ECC-A9E2-41A2D81AED4E", L"(C:\\Windows\\System32\\bisrv.dll)" },
    { L"0D47017B-B33B-46AD-9E18-FE96456C5078", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"0D72A7D4-6148-11D1-B4AA-00C04FB66EA0", L"(C:\\Windows\\System32\\cryptsvc.dll)" },
    { L"0FC77B1A-95D8-4A2E-A0C0-CFF54237462B", L"(C:\\Windows\\System32\\modernexecserver.dll)" },
    { L"0FF1F646-13BB-400A-AB50-9A78F2B7A85A", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"10BD2718-13BD-4B84-8E7D-8B5C83770A86", L"(C:\\Windows\\System32\\rdpclip.exe" },
    { L"11220835-5B26-4D94-AE86-C3E475A809DE", L"(C:\\Windows\\System32\\dpapisrv.dll)" },
    { L"11899A43-2B68-4A76-92E3-A3D6AD8C26CE", L"(C:\\Windows\\System32\\lsm.dll)" },
    { L"11F25515-C879-400A-989E-B074D5F092FE", L"(C:\\Windows\\System32\\lsm.dll)" },
    { L"12345678-1234-ABCD-EF00-0123456789AB", L"[MS-RPRN](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-rprn/e8f9dad8-d114-41cc-9a52-fc927e908cf4)" },
    { L"12345678-1234-ABCD-EF00-01234567CFFB", L"[MS-NRPC](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-nrpc/89f9b028-ee68-4fe2-afca-cc188f7079f7)" },
    { L"12345778-1234-ABCD-EF00-0123456789AB", L"(C:\\Windows\\System32\\lsasrv.dll)" },
    { L"12345778-1234-ABCD-EF00-0123456789AC", L"[MS-SAMR](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-samr/1cd138b9-cc1b-4706-b115-49e53189e32e)" },
    { L"1257B580-CE2F-4109-82D6-A9459D0BF6BC", L"(C:\\Windows\\System32\\sessenv.dll)" },
    { L"12B81E99-F207-4A4C-85D3-77B42F76FD14", L"Secondary logon service (SecLogon)" },
    { L"12E65DD8-887F-41EF-91BF-8D816C42C2E7", L"(C:\\Windows\\System32\\winlogon.exe" },
    { L"1377D115-98FD-4034-B574-111156CA239C", L"(C:\\Windows\\System32\\systemeventsbrokerserver.dll)" },
    { L"1495A2BE-B7A8-4299-9D3B-8825E5BCBFB9", L"(C:\\Windows\\System32\\webauthn.dll)" },
    { L"169C453B-5955-4672-BE44-21F61E9EF18F", L"(C:\\Windows\\System32\\scdeviceenum.dll)" },
    { L"178D84BE-9291-4994-82C6-3F909ACA5A03", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"1832BCF6-CAB8-41D4-85D2-C9410764F75A", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"18F70770-8E64-11CF-9AF1-0020AF6E72F4", L"(C:\\Windows\\System32\\combase.dll)" },
    { L"1A0D010F-1C33-432C-B0F5-8CF4E8053099", L"(C:\\Windows\\System32\\srvsvc.dll)" },
    { L"1B37CA91-76B1-4F5E-A3C7-2ABFC61F2BB0", L"(C:\\Windows\\System32\\bisrv.dll)" },
    { L"1BE3206B-2E03-4EA1-9321-12F4DFCD41D0", L"(C:\\Windows\\System32\\webplatstorageserver.dll)" },
    { L"1D55B526-C137-46C5-AB79-638F2A68E869", L"(C:\\Windows\\System32\\rpcepmap.dll)" },
    { L"1E665584-40FE-4450-8F6E-802362399694", L"(C:\\Windows\\System32\\lsm.dll)" },
    { L"1F260487-BA29-4F13-928A-BBD29761B083", L"(C:\\Windows\\System32\\termsrv.dll)" },
    { L"1F53838B-693A-4BBB-99C9-B154F749B8A3", L"(C:\\Windows\\System32\\AUDIODG.EXE" },
    { L"1FF70682-0A51-30E8-076D-740BE8CEE98B", L"[MS-TSCH](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-tsch/d5eef295-f476-47ca-b28f-c25f37610563)" },
    { L"1FFF8FAA-EC23-4E3F-A8CE-4B2F8707E636", L"(C:\\Windows\\System32\\iphlpsvc.dll)" },
    { L"201EF99A-7FA0-444C-9399-19BA84F12A1A", L"(C:\\Windows\\System32\\appinfo.dll)" },
    { L"20610036-FA22-11CF-9823-00A0C911E5DF", L"(C:\\Windows\\System32\\rasmans.dll)" },
    { L"20C40295-8DBA-48E6-AEBF-3E78EF3BB144", L"(C:\\Windows\\System32\\bisrv.dll)" },
    { L"2513BCBE-6CD4-4348-855E-7EFB3C336DD3", L"(C:\\Windows\\System32\\bisrv.dll)" },
    { L"2579FF35-0AB0-4E5A-88FA-1D88C4E0CB92", L"(C:\\Windows\\System32\\crypttpmeksvc.dll)" },
    { L"25952C5D-7976-4AA1-A3CB-C35F7AE79D1B", L"(C:\\Windows\\System32\\wlansvc.dll)" },
    { L"266F33B4-C7C1-4BD1-8F52-DDB8F2214EA9", L"(C:\\Windows\\System32\\wlansvc.dll)" },
    { L"266F33B4-C7C1-4BD1-8F52-DDB8F2214EB0", L"(C:\\Windows\\System32\\wlansvc.dll)" },
    { L"28098650-FE3C-4AF4-8A41-8BCD284941C5", L"(C:\\Windows\\System32\\termsrv.dll)" },
    { L"29770A8F-829B-4158-90A2-78CD488501F7", L"(C:\\Windows\\System32\\sessenv.dll)" },
    { L"2A82BB21-E44F-4791-9AA1-DFAE788E2F43", L"(C:\\Windows\\System32\\UBPM.dll)" },
    { L"2C7FD9CE-E706-4B40-B412-953107EF9BB0", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"2D98A740-581D-41B9-AA0D-A88B9D5CE938", L"(C:\\Windows\\System32\\bisrv.dll)" },
    { L"2E6035B2-E8F1-41A7-A044-656B439C4C34", L"(C:\\Windows\\System32\\httpprxm.dll)" },
    { L"2E7D4935-59D2-4312-A2C8-41900AA5495F", L"(C:\\Windows\\System32\\das.dll)" },
    { L"2F59A331-BF7D-48CB-9E5C-7C090D76E8B8", L"(C:\\Windows\\System32\\termsrv.dll)" },
    { L"2F5F3220-C126-1076-B549-074D078619DA", L"NetDDE Service (netdde.exe)" },
    { L"2F5F6520-CA46-1067-B319-00DD010662DA", L"(C:\\Windows\\System32\\tapisrv.dll)" },
    { L"2F5F6521-CB55-1059-B446-00DF0BCE31DB", L"(C:\\Windows\\System32\\unimdm.tsp" },
    { L"2FB92682-6599-42DC-AE13-BD2CA89BD11C", L"(C:\\Windows\\System32\\mpssvc.dll)" },
    { L"300F3532-38CC-11D0-A3F0-0020AF6B0ADD", L"(C:\\Windows\\System32\\trkwks.dll)" },
    { L"30ADC50C-5CBC-46CE-9A0E-91914789E23C", L"(C:\\Windows\\System32\\nrpsrv.dll)" },
    { L"30B044A5-A225-43F0-B3A4-E060DF91F9C1", L"(C:\\Windows\\System32\\certprop.dll)" },
    { L"326731E3-C1C0-4A69-AE20-7D9044A4EA5C", L"(C:\\Windows\\System32\\profsvc.dll)" },
    { L"338CD001-2244-31F1-AAAA-900038001003", L"[MS-RRP](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-rrp/47f3edf6-4c2d-45d8-ab5b-2dc077738903)" },
    { L"33D84484-3626-47EE-8C6F-E7E98B113BE1", L"(C:\\Windows\\System32\\WPTaskScheduler.dll)" },
    { L"342CFD40-3C6C-11CE-A893-08002B2E9C6D", L"License Logging service (llssrv.exe)" },
    { L"3473DD4D-2E88-4006-9CBA-22570909DD10", L"(C:\\Windows\\System32\\winhttp.dll)" },
    { L"3573E5F2-CFE7-4A79-845F-FE7C68823738", L"(C:\\Windows\\System32\\phoneservice.dll)" },
    { L"367ABB81-9844-35F1-AD32-98F038001003", L"[MS-SCMR](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-scmr/19168537-40b5-4d7a-99e0-d77f0f5e0241)" },
    { L"367AEB81-9844-35F1-AD32-98F038001003", L"Service Control Manager [svcctl] (services.exe)" },
    { L"369CE4F0-0FDC-11D3-BDE8-00C04F8EEE78", L"ProfMapApi (winlogon.exe)" },
    { L"378E52B0-C0A9-11CF-822D-00AA0051E40F", L"[MS-TSCH](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-tsch/084751bc-8ea4-48d7-8681-66a548842ef6)" },
    { L"3919286A-B10C-11D0-9BA8-00C04FD92EF5", L"(C:\\Windows\\System32\\lsasrv.dll)" },
    { L"3A9EF155-691D-4449-8D05-09AD57031823", L"(C:\\Windows\\System32\\schedsvc.dll)" },
    { L"3B338D89-6CFA-44B8-847E-531531BC9992", L"(C:\\Windows\\System32\\psmsrv.dll)" },
    { L"3C4728C5-F0AB-448B-BDA1-6CE01EB0A6D5", L"(C:\\Windows\\System32\\dhcpcore.dll)" },
    { L"3C4728C5-F0AB-448B-BDA1-6CE01EB0A6D6", L"(C:\\Windows\\System32\\dhcpcore6.dll)" },
    { L"3D267954-EEB7-11D1-B94E-00C04FA3080D", L"Terminal Server Licensing (C:\\Windows\\System32\\lserver[.exe|.dll)])" },
    { L"3FAF4738-3A21-4307-B46C-FDDA9BB8C0D5", L"Windows Audio Service (AudioSrv)" },
    { L"412F241E-C12A-11CE-ABFF-0020AF6E7A17", L"(C:\\Windows\\System32\\rpcss.dll)" },
    { L"43890C94-BFD7-4655-AD6A-B4A68397CDCB", L"(C:\\Windows\\System32\\pimindexmaintenance.dll)" },
    { L"44E265DD-7DAF-42CD-8560-3CDB6E7A2729", L"[MS-TSGU](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-tsgu/ea0ac9e8-2d53-477e-ba57-b1ad01e38039)" },
    { L"45776B01-5956-4485-9F80-F428F7D60129", L"(C:\\Windows\\System32\\dnsrslvr.dll)" },
    { L"45F52C28-7F9F-101A-B52B-08002B2EFABE", L"[MS-RAIW](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-raiw/a27384fe-594f-4a48-8a2f-0d1dc655c77e)" },
    { L"811109BF-A4E1-11D1-AB54-00A0C91E9B45", L"[MS-RAIW](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-raiw/27384d02-a918-4b22-90ac-d00043f31a55)"},
    { L"46F91C6B-1F95-4BFF-8490-EB648CA0A9B9", L"(C:\\Windows\\System32\\webplatstorageserver.dll)" },
    { L"47AC638A-718F-49A0-97C5-574AC77ACF4D", L"(C:\\Windows\\System32\\audiosrv.dll)" },
    { L"484809D6-4239-471B-B5BC-61DF8C23AC48", L"(C:\\Windows\\System32\\lsm.dll)" },
    { L"497D95A6-2D27-4BF5-9BBD-A6046957133C", L"(C:\\Windows\\System32\\termsrv.dll)" },
    { L"4A452661-8290-4B36-8FBE-7F4093A94978", L"(C:\\Windows\\System32\\spoolsv.exe)" },
    { L"4B112204-0E19-11D3-B42B-0000F81FEB9F", L"(C:\\Windows\\System32\\ssdpsrv.dll)" },
    { L"4B324FC8-1670-01D3-1278-5A47BF6EE188", L"(C:\\Windows\\System32\\srvsvc.dll)" },
    { L"4BEC6BB8-B5C2-4B6F-B2C1-5DA5CF92D0D9", L"(C:\\Windows\\System32\\psmsrv.dll)" },
    { L"4C8D0BEF-D7F1-49F0-9102-CAA05F58D114", L"(C:\\Windows\\System32\\nlasvc.dll)" },
    { L"4C9DBF19-D39E-4BB9-90EE-8F7179B20283", L"(C:\\Windows\\System32\\diagtrack.dll)" },
    { L"4D9F4AB8-7D1C-11CF-861E-0020AF6E7C57", L"(C:\\Windows\\System32\\rpcss.dll)" },
    { L"4DACE966-A243-4450-AE3F-9B7BCB5315B8", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"4ED8ABCC-F1E2-438B-981F-BB0E8ABC010C", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"4F32ADC8-6052-4A04-8701-293CCF2096F0", L"(C:\\Windows\\System32\\SspiSrv.dll)" },
    { L"4FC742E0-4A10-11CF-8273-00AA004AE673", L"[MS-DFSNM](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dfsnm/b471e023-618d-4c48-877f-f30c3005320c)" },
    { L"50ABC2A4-574D-40B3-9D66-EE4FD5FBA076", L"[MS-DNSP](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-dnsp/83136c8e-f5ea-4ec5-bf33-2134053d33bd)" },
    { L"51A227AE-825B-41F2-B4A9-1AC9557A1018", L"(C:\\Windows\\System32\\keyiso.dll)" },
    { L"5222821F-D5E2-4885-84F1-5F6185A0EC41", L"(C:\\Windows\\System32\\ncbservice.dll)" },
    { L"5267AABA-4F49-4653-8E26-D1E11F3F2AD9", L"(C:\\Windows\\System32\\termsrv.dll)" },
    { L"53825514-1183-4934-A0F4-CFDC51C3389B", L"(C:\\Windows\\System32\\lsm.dll)" },
    { L"54B4C689-969A-476F-8DC2-990885E9F562", L"(C:\\Windows\\System32\\storsvc.dll)" },
    { L"552D076A-CB29-4E44-8B6A-D15E59E2C0AF", L"(C:\\Windows\\System32\\iphlpsvc.dll)" },
    { L"55E6B932-1979-45D6-90C5-7F6270724112", L"(C:\\Windows\\System32\\resourcepolicyserver.dll)" },
    { L"572E35B4-1344-4565-96A1-F5DF3BFA89BB", L"(C:\\Windows\\System32\\wlidsvc.dll)" },
    { L"5824833B-3C1A-4AD2-BDFD-C31D19E23ED2", L"(C:\\Windows\\System32\\psmsrv.dll)" },
    { L"58E604E8-9ADB-4D2E-A464-3B0683FB1480", L"(C:\\Windows\\System32\\appinfo.dll)" },
    { L"5A0CE74D-F9CF-4DEA-A4C1-2D5FE4C89D51", L"(C:\\Windows\\System32\\d3d10warp.dll)" },
    { L"5A7B91F8-FF00-11D0-A9B2-00C04FB6E6FC", L"[MS-MSRP](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-msrp/5d55856d-34bf-4c0c-a87b-baa61a729b65)" },
    { L"17FDD703-1827-4E34-79D4-24A55C53BB37", L"[MS-MSRP](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-msrp/d2a949a2-398c-4383-b735-a7675af13cee)"},
    { L"5B665B9A-A086-4E26-AE24-96AB050B0EC3", L"(C:\\Windows\\System32\\das.dll)" },
    { L"5CA4A760-EBB1-11CF-8611-00A0245420ED", L"(C:\\Windows\\System32\\termsrv.dll)" },
    { L"5CBE92CB-F4BE-45C9-9FC9-33E73E557B20", L"(C:\\Windows\\System32\\dpapisrv.dll)" },
    { L"5F54CE7D-5B79-4175-8584-CB65313A0E98", L"(C:\\Windows\\System32\\appinfo.dll)" },
    { L"5FC2481B-F8D7-466B-A741-CC7806C784A3", L"(C:\\Windows\\System32\\audiosrv.dll)" },
    { L"63FBE424-2029-11D1-8DB8-00AA004ABD5E", L"(C:\\Windows\\System32\\sens.dll)" },
    { L"647D4452-9F33-4A18-B2BE-C5C0E920E94E", L"(C:\\Windows\\System32\\pla.dll)" },
    { L"64FE0B7F-9EF5-4553-A7DB-9A1975777554", L"(C:\\Windows\\System32\\RpcRtRemote.dll)" },
    { L"650A7E26-EAB8-5533-CE43-9C1DFCE11511", L"(C:\\Windows\\System32\\rascustom.dll)" },
    { L"68227AE7-9A32-45B0-8472-BF9619965838", L"(C:\\Windows\\System32\\phoneservice.dll)" },
    { L"697DCDA9-3BA9-4EB2-9247-E11F1901B0D2", L"(C:\\Windows\\System32\\systemeventsbrokerserver.dll)" },
    { L"6982A06E-5FE2-46B1-B39C-A2C545BFA069", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"6BFFD098-A112-3610-9833-012892020162", L"[MS-BRWSA](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-brwsa/c20c5c21-d285-4e98-8480-36922da69adf)" },
    { L"6BFFD098-A112-3610-9833-46C3F87E345A", L"(C:\\Windows\\System32\\wkssvc.dll)" },
    { L"6C9B7B96-45A8-4CCA-9EB3-E21CCF8B5A89", L"(C:\\Windows\\System32\\umpo.dll)" },
    { L"714DC5C4-C5F6-466A-B037-A573C958031E", L"(C:\\Windows\\System32\\eeprov.dll)" },
    { L"7212A04B-B463-402E-9649-2BA477394676", L"(C:\\Windows\\System32\\umrdp.dll)" },
    { L"7419CF08-91A7-4AFD-8F5E-1DD76DE094FD", L"(C:\\Windows\\System32\\DAB.dll)" },
    { L"76C217BC-C8B4-4201-A745-373AD9032B1A", L"(C:\\Windows\\System32\\resourcepolicyserver.dll)" },
    { L"76F03F96-CDFD-44FC-A22C-64950A001209", L"[MS-PAR](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-par/d81865df-838d-4c13-a705-d41ee24890de)" },
    { L"76F226C3-EC14-4325-8A99-6A46348418AE", L"(C:\\Windows\\System32\\wininit.exe|win.logon.exe)" },
    { L"76F226C3-EC14-4325-8A99-6A46348418AF", L"(C:\\Windows\\System32\\wininit.exe|win.logon.exe)" },
    { L"78E5D322-59A2-4324-AE3F-8BC8DE32BDFC", L"(C:\\Windows\\System32\\sstpsvc.dll)" },
    { L"7A20FCEC-DEC4-4C59-BE57-212E8F65D3DE", L"(C:\\Windows\\System32\\SgrmBroker.exe" },
    { L"7AEB6705-3AE6-471A-882D-F39C109EDC12", L"(C:\\Windows\\System32\\wcmsvc.dll)" },
    { L"7C69AC10-FA12-4DBF-90D9-C7F1E40F5DC5", L"(C:\\Windows\\System32\\audiosrv.dll)" },
    { L"7EA70BCF-48AF-4F6A-8968-6A440754D5FA", L"(C:\\Windows\\System32\\nsisvc.dll)" },
    { L"7F1317A8-4DEA-4FA2-A551-DF5516FF8879", L"(C:\\Windows\\System32\\dpapisrv.dll)" },
    { L"7F1343FE-50A9-4927-A778-0C5859517BAC", L"(C:\\Windows\\System32\\wkssvc.dll)" },
    { L"7F9D11BF-7FB9-436B-A812-B2D50C5D4C03", L"(C:\\Windows\\System32\\mpssvc.dll)" },
    { L"81EE95A8-882E-4615-888A-53344CA149E4", L"(C:\\Windows\\System32\\vpnike.dll)" },
    { L"82273FDC-E32A-18C3-3F78-827929DC23EA", L"(C:\\Windows\\System32\\wevtsvc.dll)" },
    { L"824D8D77-A27F-4915-A536-36E9283DCE29", L"(C:\\Windows\\System32\\winhttp.dll)" },
    { L"83DA7C00-E84F-11D2-9807-00C04F8EC850", L"Windows File Protection (SfcApi) [winlogon.exe]" },
    { L"850CEE52-3038-4277-B9B4-E05DB8B2C35C", L"(C:\\Windows\\System32\\das.dll)" },
    { L"857FB1BE-084F-4FB5-B59C-4B2C4BE5F0CF", L"(C:\\Windows\\System32\\bisrv.dll)" },
    { L"86D35949-83C9-4044-B424-DB363231FD0C", L"[MS-TSCH](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-tsch/96c9b399-c373-4490-b7f5-78ec3849444e)" },
    { L"8782D3B9-EBBD-4644-A3D8-E8725381919B", L"(C:\\Windows\\System32\\psmsrv.dll)" },
    { L"880FD55E-43B9-11E0-B1A8-CF4EDFD72085", L"(C:\\Windows\\System32\\ncbservice.dll)" },
    { L"88143FD0-C28D-4B2B-8FEF-8D882F6A9390", L"(C:\\Windows\\System32\\lsm.dll)" },
    { L"88ABCBC3-34EA-76AE-8215-767520655A23", L"(C:\\Windows\\System32\\resourcepolicyserver.dll)" },
    { L"894DE0C0-0D55-11D3-A322-00C04FA321A1", L"(C:\\Windows\\System32\\wininit.exe|win.logon.exe)" },
    { L"8BE456EC-9244-4D10-88E8-1DDF1BAA9ADE", L"(C:\\Windows\\System32\\phoneservice.dll)" },
    { L"8BFC3BE1-6DEF-4E2D-AF74-7C47CD0ADE4A", L"(C:\\Windows\\System32\\bisrv.dll)" },
    { L"8C7A6DE0-788D-11D0-9EDF-444553540000", L"(C:\\Windows\\System32\\wiaservc.dll)" },
    { L"8D0FFE72-D252-11D0-BF8F-00C04FD9126B", L"Cryptographic services (CryptSvc)" },
    { L"8D9F4E40-A03D-11CE-8F69-08003E30051B", L"Plug and Play service (services.exe)" },
    { L"8EC21E98-B5CE-4916-A3D6-449FA428A007", L"(C:\\Windows\\System32\\modernexecserver.dll)" },
    { L"8F09F000-B7ED-11CE-BBD2-00001A181CAD", L"[MS-RRASM](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-rrasm/8e6e89fb-9c80-4a9a-a222-d7d8948244bb)" },
    { L"8FB6D884-2388-11D0-8C35-00C04FDA2795", L"(C:\\Windows\\System32\\w32time.dll)" },
    { L"8FB74744-B2FF-4C00-BE0D-9EF9A191FE1B", L"(C:\\Windows\\System32\\keyiso.dll)" },
    { L"910562C3-EBD9-46B9-BABA-1D45842A0CEB", L"(C:\\Windows\\System32\\audiosrv.dll)" },
    { L"91AE6020-9E3C-11CF-8D7C-00AA00C091BE", L"[MS-ICPR](https://docs.microsoft.com/zh-cn/openspecs/windows_protocols/ms-icpr/5950cc59-a9f7-461a-b928-b1f631ac0d0a)" },
    { L"923C9623-DB7F-4B34-9E6D-E86580F8CA2A", L"(C:\\Windows\\System32\\SyncController.dll)" },
    { L"93149CA2-973B-11D1-8C39-00C04FB984F9", L"(C:\\Windows\\System32\\scesrv.dll)" },
    { L"95095EC8-32EA-4EB0-A3E2-041F97B36168", L"(C:\\Windows\\System32\\diagtrack.dll)" },
    { L"95406F0B-B239-4318-91BB-CEA3A46FF0DC", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"98716D03-89AC-44C7-BB8C-285824E51C4A", L"(C:\\Windows\\System32\\srvsvc.dll)" },
    { L"98CD761E-E77D-41C8-A3C0-0FB756D90EC2", L"(C:\\Windows\\System32\\diagtrack.dll)" },
    { L"98E96949-BC59-47F1-92D1-8C25B46F85C7", L"(C:\\Windows\\System32\\WLANExt.exe" },
    { L"99FCFEC4-5260-101B-BBCB-00AA0021347A", L"(C:\\Windows\\System32\\rpcss.dll)" },
    { L"9B008953-F195-4BF9-BDE0-4471971E58ED", L"(C:\\Windows\\System32\\systemeventsbrokerserver.dll)" },
    { L"9B8699AE-0E44-47B1-8E7F-86A461D7ECDC", L"(C:\\Windows\\System32\\rpcss.dll)" },
    { L"9D420415-B8FB-4F4A-8C53-4502EAD30CA9", L"(C:\\Windows\\System32\\PlaySndSrv.dll)" },
    { L"A002B3A0-C9B7-11D1-AE88-0080C75E4EC1", L"Winlogon (winlogon.exe)" },
    { L"A0BC4698-B8D7-4330-A28F-7709E18B6108", L"(C:\\Windows\\System32\\sens.dll)" },
    { L"A111F1C6-5923-47C0-9A68-D0BAFB577901", L"(C:\\Windows\\System32\\NetSetupShim.dll)" },
    { L"A1D4EAE7-39F8-4BCA-8E72-832767F5082A", L"(C:\\Windows\\System32\\das.dll)" },
    { L"A2C45F7C-7D32-46AD-96F5-ADAFB486BE74", L"(C:\\Windows\\System32\\services.exe" },
    { L"A3BAE3F7-BF97-49FB-B48D-2A5E8657B436", L"(C:\\Windows\\System32\\PhoneProviders.dll)" },
    { L"A4B8D482-80CE-40D6-934D-B22A01A44FE7", L"(C:\\Windows\\System32\\licensemanagersvc.dll)" },
    { L"A500D4C6-0DD1-4543-BC0C-D5F93486EAF8", L"(C:\\Windows\\System32\\timebrokerserver.dll)" },
    { L"AA411582-9BDF-48FB-B42B-FAA1EEE33949", L"(C:\\Windows\\System32\\nlasvc.dll)" },
    { L"ABFB6CA3-0C5E-4734-9285-0AEE72FE8D1C", L"(C:\\Windows\\System32\\wcmsvc.dll)" },
    { L"ACE1C026-8B3F-4711-8918-F345D17F5BFF", L"(C:\\Windows\\System32\\lsasrv.dll)" },
    { L"ADE78933-5718-4476-9CE3-6BE8CC4D1CC8", L"(C:\\Windows\\System32\\webplatstorageserver.dll)" },
    { L"AE33069B-A2A8-46EE-A235-DDFD339BE281", L"[MS-PAN](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-pan/045777ba-4129-42df-813b-4f113763ca6b)" },
    { L"AE55C4C0-64CE-11DD-AD8B-0800200C9A66", L"(C:\\Windows\\System32\\bdesvc.dll)" },
    { L"AE58B386-C914-4A73-BA5C-2C3E2749E478", L"(C:\\Windows\\System32\\phoneservice.dll)" },
    { L"AF7FEAD8-C34A-461F-8894-6D6F0E5EDDCD", L"(C:\\Windows\\System32\\wifinetworkmanager.dll)" },
    { L"AFC07E2E-311C-4435-808C-C483FFEEC7C9", L"(C:\\Windows\\System32\\lsasrv.dll)" },
    { L"B12FD546-C875-4B41-97D8-950487662202", L"(C:\\Windows\\System32\\sessenv.dll)" },
    { L"B18FBAB6-56F8-4702-84E0-41053293A869", L"(C:\\Windows\\System32\\usermgr.dll)" },
    { L"B1EF227E-DFA5-421E-82BB-67A6A129C496", L"(C:\\Windows\\System32\\modernexecserver.dll)" },
    { L"B25A52BF-E5DD-4F4A-AEA6-8CA7272A0E86", L"(C:\\Windows\\System32\\keyiso.dll)" },
    { L"B37F900A-EAE4-4304-A2AB-12BB668C0188", L"(C:\\Windows\\System32\\wcmsvc.dll)" },
    { L"B58AA02E-2884-4E97-8176-4EE06D794184", L"(C:\\Windows\\System32\\sysmain.dll)" },
    { L"B754FFA1-7B7B-4FB1-9D0C-F12BBDA17593", L"(C:\\Windows\\System32\\webplatstorageserver.dll)" },
    { L"B8CADBAF-E84B-46B9-84F2-6F71C03F9E55", L"(C:\\Windows\\System32\\bisrv.dll)" },
    { L"B9E79E60-3D52-11CE-AAA1-00006901293F", L"(C:\\Windows\\System32\\rpcss.dll)" },
    { L"BB8B98E8-84DD-45E7-9F34-C3FB6155EEED", L"(C:\\Windows\\System32\\vaultsvc.dll)" },
    { L"BD84CD86-9825-4376-813D-334C543F89B1", L"(C:\\Windows\\System32\\das.dll)" },
    { L"BDAA0970-413B-4A3E-9E5D-F6DC9D7E0760", L"(C:\\Windows\\System32\\psmsrv.dll)" },
    { L"BDE95FDF-EEE0-45DE-9E12-E5A61CD0D4FE", L"(C:\\Windows\\System32\\termsrv.dll)" },
    { L"BE7F785E-0E3A-4AB7-91DE-7E46E443BE29", L"(C:\\Windows\\System32\\storsvc.dll)" },
    { L"BF4DC912-E52F-4904-8EBE-9317C1BDD497", L"(C:\\Windows\\System32\\dssvc.dll)" },
    { L"C0D930F0-B787-4124-99BC-21F0ECB642CE", L"(C:\\Windows\\System32\\lsasrv.dll)" },
    { L"C27F3C08-92BA-478C-B446-B419C4CEF0E2", L"(C:\\Windows\\System32\\dusmsvc.dll)" },
    { L"C2D15CCF-A416-46DC-BA58-4624AC7A9123", L"(C:\\Windows\\System32\\lsm.dll)" },
    { L"C2D1B5DD-FA81-4460-9DD6-E7658B85454B", L"(C:\\Windows\\System32\\wcmsvc.dll)" },
    { L"C33B9F46-2088-4DBC-97E3-6125F127661C", L"(C:\\Windows\\System32\\nlasvc.dll)" },
    { L"C36BE077-E14B-4FE9-8ABC-E856EF4F048B", L"(C:\\Windows\\System32\\httpprxm.dll)" },
    { L"C3F42C6E-D4CC-4E5A-938B-9C5E8A5D8C2E", L"(C:\\Windows\\System32\\WLANMSM.dll)" },
    { L"C49A5A70-8A7F-4E70-BA16-1E8F1F193EF1", L"(C:\\Windows\\System32\\adhsvc.dll)" },
    { L"C503F532-443A-4C69-8300-CCD1FBDB3839", L"(C:\\Program Files\\Windows Defender\\mpsvc.dll)" },
    { L"C521FACF-09A9-42C5-B155-72388595CBF0", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"C59C3BF4-7812-43E9-BC34-D369F1CF8416", L"(C:\\Windows\\System32\\webplatstorageserver.dll)" },
    { L"C605F9FB-F0A3-4E2A-A073-73560F8D9E3E", L"(C:\\Windows\\System32\\bisrv.dll)" },
    { L"C681D488-D850-11D0-8C52-00C04FD90F7E", L"(C:\\Windows\\System32\\efslsaext.dll)" },
    { L"C6F3EE72-CE7E-11D1-B71E-00C04FC3111A", L"(C:\\Windows\\System32\\rpcss.dll)" },
    { L"C7CE3826-891F-4376-B161-C63D2403142C", L"(C:\\Windows\\System32\\audiosrv.dll)" },
    { L"C80066A8-7579-44FC-B9B2-8466930791B0", L"(C:\\Windows\\System32\\umrdp.dll)" },
    { L"C8BA73D2-3D55-429C-8E9A-C44F006F69FC", L"(C:\\Windows\\System32\\userdataservice.dll)" },
    { L"C8CB7687-E6D3-11D2-A958-00C04F682E16", L"WebDav Client (WebCient)" },
    { L"C9378FF1-16F7-11D0-A0B2-00AA0061426A", L"Protected Storage (lsass.exe)" },
    { L"C9AC6DB5-82B7-4E55-AE8A-E464ED7B4277", L"(C:\\Windows\\System32\\SYSNTFY.dll)" },
    { L"CAD784CB-4C1B-4D96-B8F7-4716B568B13C", L"(C:\\Windows\\System32\\wininet.dll)" },
    { L"CB40A179-20E1-43F0-97FB-3C5C6FF37EC3", L"(C:\\Windows\\System32\\rpcss.dll)" },
    { L"CBA4C918-E55A-46EE-AA62-CADE158E9165", L"(C:\\Windows\\System32\\audiosrv.dll)" },
    { L"CC105610-DA03-467E-BC73-5B9E2937458D", L"(C:\\Windows\\System32\\wlidsvc.dll)" },
    { L"D09BDEB5-6171-4A34-BFE2-06FA82652568", L"(C:\\Windows\\System32\\BrokerLib.dll)" },
    { L"D22895EF-AFF4-42C5-A5B2-B14466D34AB4", L"(C:\\Windows\\System32\\diagtrack.dll)" },
    { L"D25576E4-00D2-43F7-98F9-B4C0724158F9", L"(C:\\Windows\\System32\\lsasrv.dll)" },
    { L"D2716E94-25CB-4820-BC15-537866578562", L"(C:\\Windows\\System32\\aphostservice.dll)" },
    { L"D335B8F6-CB31-11D0-B0F9-006097BA4E54", L"IPSEC Policy Agent (PoicyAgent)" },
    { L"D6D70EF0-0E3B-11CB-ACC3-08002B1D29C4", L"RPC Locator service (locator.exe)" },
    { L"D95AFE70-A6D5-4259-822E-2C84DA1DDB0D", L"[MS-RSP](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-rsp/373160a1-9a2a-4086-ae57-5457ee2262f9)" },
    { L"DA5A86C5-12C2-4943-AB30-7F74A813D853", L"[MS-PCQ](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-pcq/dcee10e3-0512-495e-9566-26e56cc21c5c)" },
    { L"DD490425-5325-4565-B774-7E27D6C09C24", L"(C:\\Windows\\System32\\bfe.dll)" },
    { L"DD59071B-3215-4C59-8481-972EDADC0F6A", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"DE3B9BC8-BEF7-4578-A0DE-F089048442DB", L"(C:\\Windows\\System32\\AUDIODG.EXE" },
    { L"DE79FC6C-DC6F-43C7-A48E-63BBC8D4009D", L"(C:\\Windows\\System32\\rdpclip.exe" },
    { L"DF4DF73A-C52D-4E3A-8003-8437FDF8302A", L"(C:\\Windows\\System32\\coremessaging.dll)" },
    { L"E1AF8308-5D1F-11C9-91A4-08002B14A0FA", L"(C:\\Windows\\System32\\rpcepmap.dll)" },
    { L"E38F5360-8572-473E-B696-1B46873BEEAB", L"(C:\\Windows\\System32\\diagtrack.dll)" },
    { L"E3907F22-C899-44E7-9D11-9D8B3D924832", L"(C:\\Windows\\System32\\lsm.dll)" },
    { L"E40F7B57-7A25-4CD3-A135-7F7D3DF9D16B", L"(C:\\Windows\\System32\\ncbservice.dll)" },
    { L"E53D94CA-7464-4839-B044-09A2FB8B3AE5", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"E60C73E6-88F9-11CF-9AF1-0020AF6E72F4", L"(C:\\Windows\\System32\\rpcss.dll)" },
    { L"E64B9AEE-F372-4312-9A14-8F1502B5C8E3", L"(C:\\Windows\\System32\\ipnathlp.dll)" },
    { L"E7A216AF-1EC1-447F-8D3F-A87278DB564D", L"(C:\\Windows\\System32\\vmcompute.exe" },
    { L"E7F76134-9EF5-4949-A2D6-3368CC0988F3", L"(C:\\Windows\\System32\\wcmsvc.dll)" },
    { L"E8748F69-A2A4-40DF-9366-62DBEB696E26", L"(C:\\Windows\\System32\\unistore.dll)" },
    { L"EAD694ED-2243-44CB-A9DC-85D3BA934DAB", L"(C:\\Windows\\System32\\chakra.dll)" },
    { L"EB081A0D-10EE-478A-A1DD-50995283E7A8", L"(C:\\Windows\\System32\\wkssvc.dll)" },
    { L"ECBDB051-F208-46B9-8C8B-648D9D3F3944", L"(C:\\Windows\\System32\\iphlpsvc.dll)" },
    { L"ECD85155-CC3A-4F10-AAD5-9A9A2BF2EF0C", L"(C:\\Windows\\System32\\termsrv.dll)" },
    { L"EEEE008D-5C99-4E4B-861B-547A26E8ABD0", L"(C:\\Windows\\System32\\dashost.exe" },
    { L"F26E2372-D601-44F0-84B8-2591D2AF2F82", L"(C:\\Windows\\System32\\phoneservice.dll)" },
    { L"F2C9B409-C1C9-4100-8639-D8AB1486694A", L"(C:\\Windows\\System32\\wkssvc.dll)" },
    { L"F3F09FFD-FBCF-4291-944D-70AD6E0E73BB", L"(C:\\Windows\\System32\\logoncontroller.dll)" },
    { L"F44E62AF-DAB1-44C2-8013-049A9DE417D6", L"(C:\\Windows\\System32\\wcmsvc.dll)" },
    { L"F47433C3-3E9D-4157-AAD4-83AA1F5C2D4C", L"(C:\\Windows\\System32\\mpssvc.dll)" },
    { L"F50AAC00-C7F3-428E-A022-A6B71BFB9D43", L"(C:\\Windows\\System32\\cryptcatsvc.dll)" },
    { L"F6BEAFF7-1E19-4FBB-9F8F-B89E2018337C", L"[MS-EVEN6](https://docs.microsoft.com/en-us/openspecs/windows_protocols/ms-even6/2d808edd-719a-4c69-b34a-df766adb5f0c)" },
    { L"F763C91C-2AB1-47FA-868F-7DE7EFD42194", L"(C:\\Windows\\System32\\vmrdvcore.dll)" },
    { L"FAE436B0-B864-4A87-9EDA-298547CD82F2", L"(C:\\Windows\\System32\\psmserviceexthost.dll)" },
    { L"FAF2447B-B348-4FEB-8DBE-BEEE5B7F7778", L"(C:\\Windows\\System32\\wlidsvc.dll)" },
    { L"FB8A0729-2D04-4658-BE93-27B4AD553FAC", L"(C:\\Windows\\System32\\lsass.exe" },
    { L"FC48CD89-98D6-4628-9839-86F7A3E4161A", L"(C:\\Windows\\System32\\ACPBackgroundManagerPolicy.dll)" },
    { L"FD7A0523-DC70-43DD-9B2E-9C5ED48225B1", L"(C:\\Windows\\System32\\appinfo.dll)" },
    { L"FD8BE72B-A9CD-4B2C-A9CA-4DED242FBE4D", L"(C:\\Windows\\System32\\diagtrack.dll)" },
    { L"12D4B7C8-77D5-11D1-8C24-00C04FA3080D", L"HydraLicenseService (https://github.com/PubDom/Windows-Server-2003/blob/master/termsrv/license/tlserver/rpc/hydrals.idl)"},
    { L"AA177641-FC9B-41BD-80FF-F964A701596F", L"TSSDJetRPC (https://github.com/PubDom/Windows-Server-2003/blob/5c6fe3db626b63a384230a1aa6b92ac416b0765f/termsrv/sessdir/jetrpc.idl)"},
    { L"6AF13C8B-0844-4C83-9064-1892BA825527", L"TSSDQUERYRPC (https://github.com/PubDom/Windows-Server-2003/blob/5c6fe3db626b63a384230a1aa6b92ac416b0765f/termsrv/sessdir/jetrpc.idl)"},
    { L"A398E520-D59A-4BDD-AA7A-3C1E0303A511", L"(C:\\Windows\\System32\\IKEEXT.DLL)"},
    { L"ED96B012-C8CE-4F60-A682-35535B12FF75", L"TScPubRPC (C:\\Windows\\System32\\TSCPUBSvr.dll)"},
    { L"9B3195FE-D603-43D1-A0D5-9072D7CDE122", L"(C:\\Windows\\System32\\tssdjet.dll)"},
    { L"89759FCE-5A25-4086-8967-DE12F39A60B5", L"(C:\\Windows\\System32\\tssdjet.dll)"},
    { L"7D814569-35B3-4850-BB32-83035FCEBF6E", L"Network Policy Server (C:\\Windows\\System32\\ias.dll)"},
    { L"3357951C-A1D1-47DB-A278-AB945D063D03", L"RPC/HTTP Load Balancing Service (3357951c-a1d1-47db-a278-ab945d063d03)"}
};


std::unordered_map<std::wstring, LPCWSTR> KNOWN_IIDS = {
    {L"000001A5-0000-0000-C000-000000000046", L"CLSID_ActivationContextInfo"},
    {L"00000338-0000-0000-C000-000000000046", L"CLSID_ActivationPropertiesIn"},
    {L"00000339-0000-0000-C000-000000000046", L"CLSID_ActivationPropertiesOut"},
    {L"00000334-0000-0000-C000-000000000046", L"CLSID_CONTEXT_EXTENSION"},
    {L"0000033B-0000-0000-C000-000000000046", L"CLSID_ContextMarshaler"},
    {L"0000031C-0000-0000-C000-000000000046", L"CLSID_ERROR_EXTENSION"},
    {L"0000031B-0000-0000-C000-000000000046", L"CLSID_ErrorObject"},
    {L"000001AD-0000-0000-C000-000000000046", L"CLSID_InstanceInfo"},
    {L"000001AB-0000-0000-C000-000000000046", L"CLSID_InstantiationInfo"},
    {L"00000339-0000-0000-C000-000000000046", L"CLSID_PropsOutInfo"},
    {L"000001B6-0000-0000-C000-000000000046", L"CLSID_ScmReplyInfo"},
    {L"000001AA-0000-0000-C000-000000000046", L"CLSID_ScmRequestInfo"},
    {L"000001A6-0000-0000-C000-000000000046", L"CLSID_SecurityInfo"},
    {L"000001A4-0000-0000-C000-000000000046", L"CLSID_ServerLocationInfo"},
    {L"000001B9-0000-0000-C000-000000000046", L"CLSID_SpecialSystemProperties"},
    {L"4D9F4AB8-7D1C-11CF-861E-0020AF6E7C57", L"IID_IActivation"},
    {L"000001A2-0000-0000-C000-000000000046", L"IID_IActivationPropertiesIn"},
    {L"000001A3-0000-0000-C000-000000000046", L"IID_IActivationPropertiesOut"},
    {L"000001C0-0000-0000-C000-000000000046", L"IID_IContext"},
    {L"99FCFEC4-5260-101B-BBCB-00AA0021347A", L"IID_IObjectExporter"},
    {L"000001A0-0000-0000-C000-000000000046", L"IID_IRemoteSCMActivator"},
    {L"00000131-0000-0000-C000-000000000046", L"IID_IRemUnknown"},
    {L"00000143-0000-0000-C000-000000000046", L"IID_IRemUnknown2"},
    {L"00000000-0000-0000-C000-000000000046", L"IID_IUnknown"},
    {L"00000001-0000-0000-C000-000000000046", L"IID_IClassFactory"},
    {L"00000134-0000-0000-C000-000000000046", L"IRundown"},
    {L"9556DC99-828C-11CF-A37E-00AA003240C7", L"IWbemServices"},
    {L"F50A28CF-5C9C-4F7E-9D80-E25E16E18C59", L"Internal_IWbemServices"},
    {L"1BE41572-91DD-11D1-AEB2-00C04FB68820", L"IWbemProviderInit"},
    {L"6919DD07-1637-4611-A8A7-C16FAC5B2D53", L"Internal_IWbemProviderInit"},
    {L"FEC1B0AC-5808-4033-A915-C0185934581E", L"_IWmiProviderSite"},
    {L"DC12A681-737F-11CF-884D-00AA004B2E24", L"IWbemClassObject"},
    {L"7C857801-7381-11CF-884D-00AA004B2E24", L"IWbemObjectSink"},
    {L"027947E1-D731-11CE-A357-000000000001", L"IEnumWbemClassObject"},
    {L"44ACA674-E8FC-11D0-A07C-00C04FB68820", L"IWbemContext"},
    {L"44ACA675-E8FC-11D0-A07C-00C04FB68820", L"IWbemCallResult"},
    {L"C49E32C7-BC8B-11D2-85D4-00105A1F8304", L"IWbemBackupRestore"},
    {L"A359DEC5-E813-4834-8A2A-BA7F1D777D76", L"IWbemBackupRestoreEx"},
    {L"F1E9C5B2-F59B-11D2-B362-00105A1F8177", L"IWbemRemoteRefresher"},
    {L"2C9273E0-1DC3-11D3-B364-00105A1F8177", L"IWbemRefreshingServices"},
    {L"423EC01E-2E35-11D2-B604-00104B703EFD", L"IWbemWCOSmartEnum"},
    {L"1C1C45EE-4395-11D2-B60B-00104B703EFD", L"IWbemFetchSmartEnum"},
    {L"D4781CD6-E5D3-44DF-AD94-930EFE48A887", L"IWbemLoginClientID"},
    {L"F309AD18-D86A-11D0-A075-00C04FB68820", L"IWbemLevel1Login"},
    {L"541679AB-2E5F-11D3-B34E-00104BCC4B4A", L"IWbemLoginHelper"}
};
