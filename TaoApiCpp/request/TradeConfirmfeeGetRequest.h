#ifndef TRADECONFIRMFEEGETREQUEST_H
#define TRADECONFIRMFEEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradeConfirmfeeGetResponse.h>

/**
 * TOP API: 获取交易确认收货费用 
可以获取主订单或子订单的确认收货费用
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeConfirmfeeGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getIsDetail() const
;  void setIsDetail (QString isDetail);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TradeConfirmfeeGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 是否是子订单。可选值:IS_FATHER(父订单),IS_CHILD(子订单)
 **/
  QString isDetail;

/**
 * @brief 交易编号，或子订单编号
 **/
  qlonglong tid;

};

#endif  /* TRADECONFIRMFEEGETREQUEST_H */
