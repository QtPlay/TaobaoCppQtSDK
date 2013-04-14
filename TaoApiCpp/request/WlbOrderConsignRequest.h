#ifndef WLBORDERCONSIGNREQUEST_H
#define WLBORDERCONSIGNREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbOrderConsignResponse.h>

/**
 * TOP API: 如果erp导入淘宝交易订单到物流宝，当物流宝订单已发货的时候，erp需要调用该接口来通知物流订单和淘宝交易订单已发货
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderConsignRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getWlbOrderCode() const
;  void setWlbOrderCode (QString wlbOrderCode);


  virtual WlbOrderConsignResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 物流宝订单编号
 **/
  QString wlbOrderCode;

};

#endif  /* WLBORDERCONSIGNREQUEST_H */
