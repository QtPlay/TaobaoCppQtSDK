#ifndef TRADEGETREQUEST_H
#define TRADEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradeGetResponse.h>

/**
 * TOP API: 获取单笔交易的部分信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TradeGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 需要返回的字段。目前支持有：<br>

1. Trade中可以指定返回的fields:seller_nick, buyer_nick, title, type, created, tid, seller_rate, buyer_rate, status, payment, discount_fee, adjust_fee, post_fee, total_fee, pay_time, end_time, modified, consign_time, buyer_obtain_point_fee, point_fee, real_point_fee, received_payment, commission_fee, buyer_memo, seller_memo, alipay_no, buyer_message, pic_path, num_iid, num, price, cod_fee, cod_status, shipping_type <br>
2. Order中可以指定返回fields:orders.title, orders.pic_path, orders.price, orders.num, orders.num_iid, orders.sku_id, orders.refund_status, orders.status, orders.oid, orders.total_fee, orders.payment, orders.discount_fee, orders.adjust_fee, orders.sku_properties_name, orders.item_meal_name, orders.outer_sku_id, orders.outer_iid, orders.buyer_rate, orders.seller_rate <br>
3. fields：orders（返回Order中的所有允许返回的字段）
 **/
  QString fields;

/**
 * @brief 交易编号
 **/
  qlonglong tid;

};

#endif  /* TRADEGETREQUEST_H */
