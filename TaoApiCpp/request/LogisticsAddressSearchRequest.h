#ifndef LOGISTICSADDRESSSEARCHREQUEST_H
#define LOGISTICSADDRESSSEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsAddressSearchResponse.h>

/**
 * TOP API: 通过此接口查询卖家地址库，
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsAddressSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getRdef() const
;  void setRdef (QString rdef);


  virtual LogisticsAddressSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 可选，参数列表如下：<br><font color='red'>
no_def:查询非默认地址<br>
get_def:查询默认取货地址<br>
cancel_def:查询默认退货地址<br>
缺省此参数时，查询所有当前用户的地址库
</font>
 **/
  QString rdef;

};

#endif  /* LOGISTICSADDRESSSEARCHREQUEST_H */
