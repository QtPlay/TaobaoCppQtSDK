#ifndef TRADEFULLINFOGETREQUEST_H
#define TRADEFULLINFOGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/TradeFullinfoGetResponse.h>

/**
 * TOP API: 获取单笔交易的详细信息 
<br/>1. 只有在交易成功的状态下才能取到交易佣金，其它状态下取到的都是零或空值  
<br/>2. 只有单笔订单的情况下Trade数据结构中才包含商品相关的信息  
<br/>3. 获取到的Order中的payment字段在单笔子订单时包含物流费用，多笔子订单时不包含物流费用 
<br/>4. 请按需获取字段，减少TOP系统的压力 
<br/>5. <span style="color:red">通过异步接口<a href="http://api.taobao.com/apidoc/api.htm?path=cid:5-apiId:10417">taobao.topats.trades.fullinfo.get</a>可以一次性获取多达100笔订单详情</span>
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class TradeFullinfoGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getTid() const
;  void setTid (qlonglong tid);


  virtual TradeFullinfoGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 1.Trade中可以指定返回的fields：seller_nick, buyer_nick, title, type, created, tid, seller_rate,buyer_flag, buyer_rate, status, payment, adjust_fee, post_fee, total_fee, pay_time, end_time, modified, consign_time, buyer_obtain_point_fee, point_fee, real_point_fee, received_payment, commission_fee, buyer_memo, seller_memo, alipay_no,alipay_id,buyer_message, pic_path, num_iid, num, price, buyer_alipay_no, receiver_name, receiver_state, receiver_city, receiver_district, receiver_address, receiver_zip, receiver_mobile, receiver_phone,seller_flag, seller_alipay_no, seller_mobile, seller_phone, seller_name, seller_email, available_confirm_fee, has_post_fee, timeout_action_time, snapshot_url, cod_fee, cod_status, shipping_type, trade_memo, is_3D,buyer_email,buyer_area, trade_from,is_lgtype,is_force_wlb,is_brand_sale,buyer_cod_fee,discount_fee,seller_cod_fee,express_agency_fee,invoice_name,service_orders,credit_cardfee,step_trade_status,step_paid_fee,mark_desc,has_yfx,yfx_fee,yfx_id,yfx_type,trade_source(注：当该授权用户为卖家时不能查看买家buyer_memo,buyer_flag),eticket_ext,send_time 
2.Order中可以指定返回fields：orders.title, orders.pic_path, orders.price, orders.num, orders.num_iid, orders.sku_id, orders.refund_status, orders.status, orders.oid, orders.total_fee, orders.payment, orders.discount_fee, orders.adjust_fee, orders.snapshot_url, orders.timeout_action_time，orders.sku_properties_name, orders.item_meal_name, orders.item_meal_id，item_memo,orders.buyer_rate, orders.seller_rate, orders.outer_iid, orders.outer_sku_id, orders.refund_id, orders.seller_type, orders.is_oversold,orders.end_time,orders.order_from,orders.consign_time,orders.shipping_type,orders.logistics_company,orders.invice_no 
3.fields：orders（返回Order的所有内容） 
4.flelds：promotion_details(返回promotion_details所有内容，优惠详情),invoice_name(发票抬头)
 **/
  QString fields;

/**
 * @brief 交易编号
 **/
  qlonglong tid;

};

#endif  /* TRADEFULLINFOGETREQUEST_H */
