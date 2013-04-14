#ifndef LOGISTICSADDRESSREMOVEREQUEST_H
#define LOGISTICSADDRESSREMOVEREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsAddressRemoveResponse.h>

/**
 * TOP API: 用此接口删除卖家地址库
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsAddressRemoveRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getContactId() const
;  void setContactId (qlonglong contactId);


  virtual LogisticsAddressRemoveResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 地址库ID
 **/
  qlonglong contactId;

};

#endif  /* LOGISTICSADDRESSREMOVEREQUEST_H */
