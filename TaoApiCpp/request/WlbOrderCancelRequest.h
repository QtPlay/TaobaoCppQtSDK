#ifndef WLBORDERCANCELREQUEST_H
#define WLBORDERCANCELREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbOrderCancelResponse.h>

/**
 * TOP API: 取消物流宝订单
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderCancelRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getWlbOrderCode() const
;  void setWlbOrderCode (QString wlbOrderCode);


  virtual WlbOrderCancelResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 物流宝订单编号
 **/
  QString wlbOrderCode;

};

#endif  /* WLBORDERCANCELREQUEST_H */
