#ifndef _UPGRADEAPI_H_
#define _UPGRADEAPI_H_
#define CHECK_FAILED 5
bool do_rk_partition_upgrade(char *szFw,void *pCallback=NULL,void *pProgressCallback=NULL,char nBoot=0,char *szBootDev=NULL);
int do_rk_firmware_upgrade(char *szFw,void *pCallback=NULL,void *pProgressCallback=NULL,char *szBootDev=NULL);
bool do_rk_backup_recovery(void *pCallback=NULL,void *pProgressCallback=NULL);


#endif

