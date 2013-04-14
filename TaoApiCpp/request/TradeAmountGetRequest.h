#ifndef TRADEAMOUNTGETREQUEST_H
#define TRADEAMOUNTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradeAmountGetResponse.h>

/**
 * TOP API: 卖家查询该笔交易订单的资金帐务相关的数据； 
1. 只供卖家使用，买家不可使用 
2. 可查询所有的状态的订单，但不同状态时订单的相关数据可能会有不同
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeAmountGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TradeAmountGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 订单帐务详情需要返回的字段信息，可选值如下： 
1. TradeAmount中可指定的fields： 
tid,alipay_no,created,pay_time,end_time,total_fee,payment,post_fee,cod_fee,commission_fee,buyer_obtain_point_fee 
2. OrderAmount中可指定的fields：order_amounts.oid,order_amounts.title,order_amounts.num_iid, 
order_amounts.sku_properties_name,order_amounts.sku_id,order_amounts.num,order_amounts.price,order_amounts.discount_fee,order_amounts.adjust_fee,order_amounts.payment,order_amounts.promotion_name 
3. order_amounts(返回OrderAmount的所有内容) 
4. promotion_details(指定该值会返回主订单的promotion_details中除id之外的所有字段)
 **/
  QString fields;

/**
 * @brief 订单交易编号
 **/
  qlonglong tid;

};

#endif  /* TRADEAMOUNTGETREQUEST_H */
