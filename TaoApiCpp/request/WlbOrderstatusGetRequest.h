#ifndef WLBORDERSTATUSGETREQUEST_H
#define WLBORDERSTATUSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbOrderstatusGetResponse.h>

/**
 * TOP API: 根据物流宝订单号查询物流宝订单至目前为止的流转状态列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderstatusGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getOrderCode() const
;  void setOrderCode (QString orderCode);


  virtual WlbOrderstatusGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 物流宝订单编码
 **/
  QString orderCode;

};

#endif  /* WLBORDERSTATUSGETREQUEST_H */
