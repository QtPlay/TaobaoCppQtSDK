#ifndef WLBWLBORDERGETREQUEST_H
#define WLBWLBORDERGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbWlborderGetResponse.h>

/**
 * TOP API: 根据物流宝订单编号查询物流宝订单概要信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbWlborderGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getWlbOrderCode() const
;  void setWlbOrderCode (QString wlbOrderCode);


  virtual WlbWlborderGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 物流宝订单编码
 **/
  QString wlbOrderCode;

};

#endif  /* WLBWLBORDERGETREQUEST_H */
