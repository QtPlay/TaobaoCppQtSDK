#ifndef FENXIAOORDERSGETREQUEST_H
#define FENXIAOORDERSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/FenxiaoOrdersGetResponse.h>

/**
 * TOP API: 分销商或供应商均可用此接口查询采购单信息. (发货处理请调用物流API中的发货接口)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class FenxiaoOrdersGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndCreated() const
;  void setEndCreated (QDateTime endCreated);

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 qlonglong getPurchaseOrderId() const
;  void setPurchaseOrderId (qlonglong purchaseOrderId);

 QDateTime getStartCreated() const
;  void setStartCreated (QDateTime startCreated);

 QString getStatus() const
;  void setStatus (QString status);

 QString getTimeType() const
;  void setTimeType (QString timeType);


  virtual FenxiaoOrdersGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 结束时间 格式 yyyy-MM-dd HH:mm:ss.支持到秒的查询。若不传时分秒，默认为0时0分0秒。若purchase_order_id没传，则此参数必传。
 **/
  QDateTime endCreated;

/**
 * @brief 多个字段用","分隔。 
 
fields 
如果为空：返回所有采购单对象(purchase_orders)字段。 
如果不为空：返回指定采购单对象(purchase_orders)字段。 
 
例1： 
sub_purchase_orders.tc_order_id 表示只返回tc_order_id  
例2： 
sub_purchase_orders表示只返回子采购单列表
 **/
  QString fields;

/**
 * @brief 页码。（大于0的整数。默认为1）
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数。（每页条数不超过50条）
 **/
  qlonglong pageSize;

/**
 * @brief 采购单编号或分销流水号，若其它参数没传，则此参数必传。
 **/
  qlonglong purchaseOrderId;

/**
 * @brief 起始时间 格式 yyyy-MM-dd HH:mm:ss.支持到秒的查询。若不传时分秒，默认为0时0分0秒。若purchase_order_id没传，则此参数必传。
 **/
  QDateTime startCreated;

/**
 * @brief 交易状态，不传默认查询所有采购单根据身份选择自身状态可选值:<br> *供应商：<br> WAIT_SELLER_SEND_GOODS(等待发货)<br> WAIT_SELLER_CONFIRM_PAY(待确认收款)<br> WAIT_BUYER_PAY(等待付款)<br> WAIT_BUYER_CONFIRM_GOODS(已发货)<br> TRADE_REFUNDING(退款中)<br> TRADE_FINISHED(采购成功)<br> TRADE_CLOSED(已关闭)<br> *分销商：<br> WAIT_BUYER_PAY(等待付款)<br> WAIT_BUYER_CONFIRM_GOODS(待收货确认)<br> TRADE_FOR_PAY(已付款)<br> TRADE_REFUNDING(退款中)<br> TRADE_FINISHED(采购成功)<br> TRADE_CLOSED(已关闭)<br>
 **/
  QString status;

/**
 * @brief 可选值：trade_time_type(采购单按照成交时间范围查询),update_time_type(采购单按照更新时间范围查询)
 **/
  QString timeType;

};

#endif  /* FENXIAOORDERSGETREQUEST_H */
