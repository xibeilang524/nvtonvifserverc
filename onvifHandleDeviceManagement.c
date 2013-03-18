#include "soapH.h"
#include "soapStub.h"
#include "onvifHandle.h"
#include "appCommon.h"



SOAP_FMAC5 int SOAP_FMAC6 __tds__GetServices(struct soap* soap,
		struct _tds__GetServices *tds__GetServices,
		struct _tds__GetServicesResponse *tds__GetServicesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetServiceCapabilities(
		struct soap* soap,
		struct _tds__GetServiceCapabilities *tds__GetServiceCapabilities,
		struct _tds__GetServiceCapabilitiesResponse *tds__GetServiceCapabilitiesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetDeviceInformation(
		struct soap* soap,
		struct _tds__GetDeviceInformation *tds__GetDeviceInformation,
		struct _tds__GetDeviceInformationResponse *tds__GetDeviceInformationResponse) {

	tds__GetDeviceInformationResponse->HardwareId = (char *) soap_malloc(soap,
			100);
	strcpy(tds__GetDeviceInformationResponse->HardwareId, "xchd01");
	tds__GetDeviceInformationResponse->FirmwareVersion = (char *) soap_malloc(
			soap, 100);
	strcpy(tds__GetDeviceInformationResponse->FirmwareVersion, "v1.0");
	tds__GetDeviceInformationResponse->Manufacturer = (char *) soap_malloc(soap,
			100);
	strcpy(tds__GetDeviceInformationResponse->Manufacturer, "caoyonghua");
	tds__GetDeviceInformationResponse->Model = (char *) soap_malloc(soap, 100);
	strcpy(tds__GetDeviceInformationResponse->Model, "ipc01");
	tds__GetDeviceInformationResponse->SerialNumber = (char *) soap_malloc(soap,
			100);
	strcpy(tds__GetDeviceInformationResponse->SerialNumber, "132423423");
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetSystemDateAndTime(
		struct soap* soap,
		struct _tds__SetSystemDateAndTime *tds__SetSystemDateAndTime,
		struct _tds__SetSystemDateAndTimeResponse *tds__SetSystemDateAndTimeResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetSystemDateAndTime(
		struct soap* soap,
		struct _tds__GetSystemDateAndTime *tds__GetSystemDateAndTime,
		struct _tds__GetSystemDateAndTimeResponse *tds__GetSystemDateAndTimeResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetSystemFactoryDefault(
		struct soap* soap,
		struct _tds__SetSystemFactoryDefault *tds__SetSystemFactoryDefault,
		struct _tds__SetSystemFactoryDefaultResponse *tds__SetSystemFactoryDefaultResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__UpgradeSystemFirmware(
		struct soap* soap,
		struct _tds__UpgradeSystemFirmware *tds__UpgradeSystemFirmware,
		struct _tds__UpgradeSystemFirmwareResponse *tds__UpgradeSystemFirmwareResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SystemReboot(struct soap* soap,
		struct _tds__SystemReboot *tds__SystemReboot,
		struct _tds__SystemRebootResponse *tds__SystemRebootResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__RestoreSystem(struct soap* soap,
		struct _tds__RestoreSystem *tds__RestoreSystem,
		struct _tds__RestoreSystemResponse *tds__RestoreSystemResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetSystemBackup(struct soap* soap,
		struct _tds__GetSystemBackup *tds__GetSystemBackup,
		struct _tds__GetSystemBackupResponse *tds__GetSystemBackupResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetSystemLog(struct soap* soap,
		struct _tds__GetSystemLog *tds__GetSystemLog,
		struct _tds__GetSystemLogResponse *tds__GetSystemLogResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetSystemSupportInformation(
		struct soap* soap,
		struct _tds__GetSystemSupportInformation *tds__GetSystemSupportInformation,
		struct _tds__GetSystemSupportInformationResponse *tds__GetSystemSupportInformationResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetScopes(struct soap* soap,
		struct _tds__GetScopes *tds__GetScopes,
		struct _tds__GetScopesResponse *tds__GetScopesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetScopes(struct soap* soap,
		struct _tds__SetScopes *tds__SetScopes,
		struct _tds__SetScopesResponse *tds__SetScopesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__AddScopes(struct soap* soap,
		struct _tds__AddScopes *tds__AddScopes,
		struct _tds__AddScopesResponse *tds__AddScopesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__RemoveScopes(struct soap* soap,
		struct _tds__RemoveScopes *tds__RemoveScopes,
		struct _tds__RemoveScopesResponse *tds__RemoveScopesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetDiscoveryMode(struct soap* soap,
		struct _tds__GetDiscoveryMode *tds__GetDiscoveryMode,
		struct _tds__GetDiscoveryModeResponse *tds__GetDiscoveryModeResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetDiscoveryMode(struct soap* soap,
		struct _tds__SetDiscoveryMode *tds__SetDiscoveryMode,
		struct _tds__SetDiscoveryModeResponse *tds__SetDiscoveryModeResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetRemoteDiscoveryMode(
		struct soap* soap,
		struct _tds__GetRemoteDiscoveryMode *tds__GetRemoteDiscoveryMode,
		struct _tds__GetRemoteDiscoveryModeResponse *tds__GetRemoteDiscoveryModeResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetRemoteDiscoveryMode(
		struct soap* soap,
		struct _tds__SetRemoteDiscoveryMode *tds__SetRemoteDiscoveryMode,
		struct _tds__SetRemoteDiscoveryModeResponse *tds__SetRemoteDiscoveryModeResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetDPAddresses(struct soap* soap,
		struct _tds__GetDPAddresses *tds__GetDPAddresses,
		struct _tds__GetDPAddressesResponse *tds__GetDPAddressesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetEndpointReference(
		struct soap* soap,
		struct _tds__GetEndpointReference *tds__GetEndpointReference,
		struct _tds__GetEndpointReferenceResponse *tds__GetEndpointReferenceResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetRemoteUser(struct soap* soap,
		struct _tds__GetRemoteUser *tds__GetRemoteUser,
		struct _tds__GetRemoteUserResponse *tds__GetRemoteUserResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetRemoteUser(struct soap* soap,
		struct _tds__SetRemoteUser *tds__SetRemoteUser,
		struct _tds__SetRemoteUserResponse *tds__SetRemoteUserResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetUsers(struct soap* soap,
		struct _tds__GetUsers *tds__GetUsers,
		struct _tds__GetUsersResponse *tds__GetUsersResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__CreateUsers(struct soap* soap,
		struct _tds__CreateUsers *tds__CreateUsers,
		struct _tds__CreateUsersResponse *tds__CreateUsersResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__DeleteUsers(struct soap* soap,
		struct _tds__DeleteUsers *tds__DeleteUsers,
		struct _tds__DeleteUsersResponse *tds__DeleteUsersResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetUser(struct soap* soap,
		struct _tds__SetUser *tds__SetUser,
		struct _tds__SetUserResponse *tds__SetUserResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetWsdlUrl(struct soap* soap,
		struct _tds__GetWsdlUrl *tds__GetWsdlUrl,
		struct _tds__GetWsdlUrlResponse *tds__GetWsdlUrlResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetCapabilities(struct soap* soap,
		struct _tds__GetCapabilities *tds__GetCapabilities,
		struct _tds__GetCapabilitiesResponse *tds__GetCapabilitiesResponse) {
	char ip_list[512] = { 0 };
	getLocalIp(ip_list);
	tds__GetCapabilitiesResponse->Capabilities->Media =
			(struct tt__MediaCapabilities*) soap_malloc(soap,
					sizeof(struct tt__MediaCapabilities));
	tds__GetCapabilitiesResponse->Capabilities->Media->XAddr =
			(char *) soap_malloc(soap, sizeof(char) * LARGE_INFO_LENGTH);
	strcpy(tds__GetCapabilitiesResponse->Capabilities->Media->XAddr, ip_list);
	tds__GetCapabilitiesResponse->Capabilities->Media->StreamingCapabilities =
			(struct tt__RealTimeStreamingCapabilities*) soap_malloc(soap,
					sizeof(struct tt__RealTimeStreamingCapabilities));
	tds__GetCapabilitiesResponse->Capabilities->Media->StreamingCapabilities->RTPMulticast =
			(int *) soap_malloc(soap, sizeof(int));
	*tds__GetCapabilitiesResponse->Capabilities->Media->StreamingCapabilities->RTPMulticast =
			soap_False;
	tds__GetCapabilitiesResponse->Capabilities->Media->StreamingCapabilities->RTP_USCORETCP =
			(int *) soap_malloc(soap, sizeof(int));
	*tds__GetCapabilitiesResponse->Capabilities->Media->StreamingCapabilities->RTP_USCORETCP =
			soap_True;
	tds__GetCapabilitiesResponse->Capabilities->Media->StreamingCapabilities->RTP_USCORERTSP_USCORETCP =
			(int *) soap_malloc(soap, sizeof(int));
	*tds__GetCapabilitiesResponse->Capabilities->Media->StreamingCapabilities->RTP_USCORERTSP_USCORETCP =
			soap_True;
	tds__GetCapabilitiesResponse->Capabilities->Media->StreamingCapabilities->Extension =
			NULL;
	tds__GetCapabilitiesResponse->Capabilities->Media->Extension = NULL;
	tds__GetCapabilitiesResponse->Capabilities->Media->__size = 0;
	tds__GetCapabilitiesResponse->Capabilities->Media->__any = 0;

	tds__GetCapabilitiesResponse->Capabilities->Extension->DeviceIO->VideoSources =
			TRUE;
	tds__GetCapabilitiesResponse->Capabilities->Extension->DeviceIO->VideoOutputs =
			FALSE;
	tds__GetCapabilitiesResponse->Capabilities->Extension->DeviceIO->AudioSources =
			FALSE;
	tds__GetCapabilitiesResponse->Capabilities->Extension->DeviceIO->AudioOutputs =
			FALSE;
	tds__GetCapabilitiesResponse->Capabilities->Extension->DeviceIO->RelayOutputs =
			FALSE;
	tds__GetCapabilitiesResponse->Capabilities->Extension->DeviceIO->__size = 0;
	tds__GetCapabilitiesResponse->Capabilities->Extension->DeviceIO->__any =
			NULL;

	tds__GetCapabilitiesResponse->Capabilities->Extension->Display = NULL;
	tds__GetCapabilitiesResponse->Capabilities->Extension->Recording = NULL;
	tds__GetCapabilitiesResponse->Capabilities->Extension->Search = NULL;
	tds__GetCapabilitiesResponse->Capabilities->Extension->Replay = NULL;
	tds__GetCapabilitiesResponse->Capabilities->Extension->Receiver = NULL;
	tds__GetCapabilitiesResponse->Capabilities->Extension->AnalyticsDevice =
			NULL;
	tds__GetCapabilitiesResponse->Capabilities->Extension->Extensions = NULL;
	tds__GetCapabilitiesResponse->Capabilities->Extension->__size = 0;
	tds__GetCapabilitiesResponse->Capabilities->Extension->__any = NULL;
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetDPAddresses(struct soap* soap,
		struct _tds__SetDPAddresses *tds__SetDPAddresses,
		struct _tds__SetDPAddressesResponse *tds__SetDPAddressesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetHostname(struct soap* soap,
		struct _tds__GetHostname *tds__GetHostname,
		struct _tds__GetHostnameResponse *tds__GetHostnameResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetHostname(struct soap* soap,
		struct _tds__SetHostname *tds__SetHostname,
		struct _tds__SetHostnameResponse *tds__SetHostnameResponse) {
	return SOAP_OK;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetHostnameFromDHCP(
		struct soap* soap,
		struct _tds__SetHostnameFromDHCP *tds__SetHostnameFromDHCP,
		struct _tds__SetHostnameFromDHCPResponse *tds__SetHostnameFromDHCPResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetDNS(struct soap* soap,
		struct _tds__GetDNS *tds__GetDNS,
		struct _tds__GetDNSResponse *tds__GetDNSResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetDNS(struct soap* soap,
		struct _tds__SetDNS *tds__SetDNS,
		struct _tds__SetDNSResponse *tds__SetDNSResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetNTP(struct soap* soap,
		struct _tds__GetNTP *tds__GetNTP,
		struct _tds__GetNTPResponse *tds__GetNTPResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetNTP(struct soap* soap,
		struct _tds__SetNTP *tds__SetNTP,
		struct _tds__SetNTPResponse *tds__SetNTPResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetDynamicDNS(struct soap* soap,
		struct _tds__GetDynamicDNS *tds__GetDynamicDNS,
		struct _tds__GetDynamicDNSResponse *tds__GetDynamicDNSResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetDynamicDNS(struct soap* soap,
		struct _tds__SetDynamicDNS *tds__SetDynamicDNS,
		struct _tds__SetDynamicDNSResponse *tds__SetDynamicDNSResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetNetworkInterfaces(
		struct soap* soap,
		struct _tds__GetNetworkInterfaces *tds__GetNetworkInterfaces,
		struct _tds__GetNetworkInterfacesResponse *tds__GetNetworkInterfacesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetNetworkInterfaces(
		struct soap* soap,
		struct _tds__SetNetworkInterfaces *tds__SetNetworkInterfaces,
		struct _tds__SetNetworkInterfacesResponse *tds__SetNetworkInterfacesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetNetworkProtocols(
		struct soap* soap,
		struct _tds__GetNetworkProtocols *tds__GetNetworkProtocols,
		struct _tds__GetNetworkProtocolsResponse *tds__GetNetworkProtocolsResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetNetworkProtocols(
		struct soap* soap,
		struct _tds__SetNetworkProtocols *tds__SetNetworkProtocols,
		struct _tds__SetNetworkProtocolsResponse *tds__SetNetworkProtocolsResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetNetworkDefaultGateway(
		struct soap* soap,
		struct _tds__GetNetworkDefaultGateway *tds__GetNetworkDefaultGateway,
		struct _tds__GetNetworkDefaultGatewayResponse *tds__GetNetworkDefaultGatewayResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetNetworkDefaultGateway(
		struct soap* soap,
		struct _tds__SetNetworkDefaultGateway *tds__SetNetworkDefaultGateway,
		struct _tds__SetNetworkDefaultGatewayResponse *tds__SetNetworkDefaultGatewayResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetZeroConfiguration(
		struct soap* soap,
		struct _tds__GetZeroConfiguration *tds__GetZeroConfiguration,
		struct _tds__GetZeroConfigurationResponse *tds__GetZeroConfigurationResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetZeroConfiguration(
		struct soap* soap,
		struct _tds__SetZeroConfiguration *tds__SetZeroConfiguration,
		struct _tds__SetZeroConfigurationResponse *tds__SetZeroConfigurationResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetIPAddressFilter(
		struct soap* soap,
		struct _tds__GetIPAddressFilter *tds__GetIPAddressFilter,
		struct _tds__GetIPAddressFilterResponse *tds__GetIPAddressFilterResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetIPAddressFilter(
		struct soap* soap,
		struct _tds__SetIPAddressFilter *tds__SetIPAddressFilter,
		struct _tds__SetIPAddressFilterResponse *tds__SetIPAddressFilterResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__AddIPAddressFilter(
		struct soap* soap,
		struct _tds__AddIPAddressFilter *tds__AddIPAddressFilter,
		struct _tds__AddIPAddressFilterResponse *tds__AddIPAddressFilterResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__RemoveIPAddressFilter(
		struct soap* soap,
		struct _tds__RemoveIPAddressFilter *tds__RemoveIPAddressFilter,
		struct _tds__RemoveIPAddressFilterResponse *tds__RemoveIPAddressFilterResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetAccessPolicy(struct soap* soap,
		struct _tds__GetAccessPolicy *tds__GetAccessPolicy,
		struct _tds__GetAccessPolicyResponse *tds__GetAccessPolicyResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetAccessPolicy(struct soap* soap,
		struct _tds__SetAccessPolicy *tds__SetAccessPolicy,
		struct _tds__SetAccessPolicyResponse *tds__SetAccessPolicyResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__CreateCertificate(struct soap* soap,
		struct _tds__CreateCertificate *tds__CreateCertificate,
		struct _tds__CreateCertificateResponse *tds__CreateCertificateResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetCertificates(struct soap* soap,
		struct _tds__GetCertificates *tds__GetCertificates,
		struct _tds__GetCertificatesResponse *tds__GetCertificatesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetCertificatesStatus(
		struct soap* soap,
		struct _tds__GetCertificatesStatus *tds__GetCertificatesStatus,
		struct _tds__GetCertificatesStatusResponse *tds__GetCertificatesStatusResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetCertificatesStatus(
		struct soap* soap,
		struct _tds__SetCertificatesStatus *tds__SetCertificatesStatus,
		struct _tds__SetCertificatesStatusResponse *tds__SetCertificatesStatusResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__DeleteCertificates(
		struct soap* soap,
		struct _tds__DeleteCertificates *tds__DeleteCertificates,
		struct _tds__DeleteCertificatesResponse *tds__DeleteCertificatesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetPkcs10Request(struct soap* soap,
		struct _tds__GetPkcs10Request *tds__GetPkcs10Request,
		struct _tds__GetPkcs10RequestResponse *tds__GetPkcs10RequestResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__LoadCertificates(struct soap* soap,
		struct _tds__LoadCertificates *tds__LoadCertificates,
		struct _tds__LoadCertificatesResponse *tds__LoadCertificatesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetClientCertificateMode(
		struct soap* soap,
		struct _tds__GetClientCertificateMode *tds__GetClientCertificateMode,
		struct _tds__GetClientCertificateModeResponse *tds__GetClientCertificateModeResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetClientCertificateMode(
		struct soap* soap,
		struct _tds__SetClientCertificateMode *tds__SetClientCertificateMode,
		struct _tds__SetClientCertificateModeResponse *tds__SetClientCertificateModeResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetRelayOutputs(struct soap* soap,
		struct _tds__GetRelayOutputs *tds__GetRelayOutputs,
		struct _tds__GetRelayOutputsResponse *tds__GetRelayOutputsResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetRelayOutputSettings(
		struct soap* soap,
		struct _tds__SetRelayOutputSettings *tds__SetRelayOutputSettings,
		struct _tds__SetRelayOutputSettingsResponse *tds__SetRelayOutputSettingsResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetRelayOutputState(
		struct soap* soap,
		struct _tds__SetRelayOutputState *tds__SetRelayOutputState,
		struct _tds__SetRelayOutputStateResponse *tds__SetRelayOutputStateResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SendAuxiliaryCommand(
		struct soap* soap,
		struct _tds__SendAuxiliaryCommand *tds__SendAuxiliaryCommand,
		struct _tds__SendAuxiliaryCommandResponse *tds__SendAuxiliaryCommandResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetCACertificates(struct soap* soap,
		struct _tds__GetCACertificates *tds__GetCACertificates,
		struct _tds__GetCACertificatesResponse *tds__GetCACertificatesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__LoadCertificateWithPrivateKey(
		struct soap* soap,
		struct _tds__LoadCertificateWithPrivateKey *tds__LoadCertificateWithPrivateKey,
		struct _tds__LoadCertificateWithPrivateKeyResponse *tds__LoadCertificateWithPrivateKeyResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetCertificateInformation(
		struct soap* soap,
		struct _tds__GetCertificateInformation *tds__GetCertificateInformation,
		struct _tds__GetCertificateInformationResponse *tds__GetCertificateInformationResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__LoadCACertificates(
		struct soap* soap,
		struct _tds__LoadCACertificates *tds__LoadCACertificates,
		struct _tds__LoadCACertificatesResponse *tds__LoadCACertificatesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__CreateDot1XConfiguration(
		struct soap* soap,
		struct _tds__CreateDot1XConfiguration *tds__CreateDot1XConfiguration,
		struct _tds__CreateDot1XConfigurationResponse *tds__CreateDot1XConfigurationResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__SetDot1XConfiguration(
		struct soap* soap,
		struct _tds__SetDot1XConfiguration *tds__SetDot1XConfiguration,
		struct _tds__SetDot1XConfigurationResponse *tds__SetDot1XConfigurationResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetDot1XConfiguration(
		struct soap* soap,
		struct _tds__GetDot1XConfiguration *tds__GetDot1XConfiguration,
		struct _tds__GetDot1XConfigurationResponse *tds__GetDot1XConfigurationResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetDot1XConfigurations(
		struct soap* soap,
		struct _tds__GetDot1XConfigurations *tds__GetDot1XConfigurations,
		struct _tds__GetDot1XConfigurationsResponse *tds__GetDot1XConfigurationsResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__DeleteDot1XConfiguration(
		struct soap* soap,
		struct _tds__DeleteDot1XConfiguration *tds__DeleteDot1XConfiguration,
		struct _tds__DeleteDot1XConfigurationResponse *tds__DeleteDot1XConfigurationResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetDot11Capabilities(
		struct soap* soap,
		struct _tds__GetDot11Capabilities *tds__GetDot11Capabilities,
		struct _tds__GetDot11CapabilitiesResponse *tds__GetDot11CapabilitiesResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetDot11Status(struct soap* soap,
		struct _tds__GetDot11Status *tds__GetDot11Status,
		struct _tds__GetDot11StatusResponse *tds__GetDot11StatusResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__ScanAvailableDot11Networks(
		struct soap* soap,
		struct _tds__ScanAvailableDot11Networks *tds__ScanAvailableDot11Networks,
		struct _tds__ScanAvailableDot11NetworksResponse *tds__ScanAvailableDot11NetworksResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__GetSystemUris(struct soap* soap,
		struct _tds__GetSystemUris *tds__GetSystemUris,
		struct _tds__GetSystemUrisResponse *tds__GetSystemUrisResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

SOAP_FMAC5 int SOAP_FMAC6 __tds__StartFirmwareUpgrade(
		struct soap* soap,
		struct _tds__StartFirmwareUpgrade *tds__StartFirmwareUpgrade,
		struct _tds__StartFirmwareUpgradeResponse *tds__StartFirmwareUpgradeResponse) {
	return GSOAP_RET_CODE_NOT_IMPLEMENT;
}

