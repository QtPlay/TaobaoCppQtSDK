#ifndef LOGISTICSORDERSGETREQUEST_H
#define LOGISTICSORDERSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/LogisticsOrdersGetResponse.h>

/**
 * TOP API: 批量查询物流订单。（注：该API主要是提供给卖家查询物流订单使用，买家查询物流订单，建议使用taobao.logistics.trace.search）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsOrdersGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getBuyerNick() const
;  void setBuyerNick (QString buyerNick);

 QDateTime getEndCreated() const
;  void setEndCreated (QDateTime endCreated);

 QString getFields() const
;  void setFields (QString fields);

 QString getFreightPayer() const
;  void setFreightPayer (QString freightPayer);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getReceiverName() const
;  void setReceiverName (QString receiverName);

 QString getSellerConfirm() const
;  void setSellerConfirm (QString sellerConfirm);

 QDateTime getStartCreated() const
;  void setStartCreated (QDateTime startCreated);

 QString getStatus() const
;  void setStatus (QString status);

 qlonglong getTid() const
;  void setTid (qlonglong tid);

 QString getType() const
;  void setType (QString type);


  virtual LogisticsOrdersGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 买家昵称
 **/
  QString buyerNick;

/**
 * @brief 创建时间结束
 **/
  QDateTime endCreated;

/**
 * @brief 需返回的字段列表.可选值:Shipping 物流数据结构中的以下字段: <br> 
tid,order_code,seller_nick,buyer_nick,delivery_start, delivery_end,out_sid,item_title,receiver_name, created,modified,status,type,freight_payer,seller_confirm,company_name；<br>多个字段之间用","分隔。如tid,seller_nick,buyer_nick,delivery_start。
 **/
  QString fields;

/**
 * @brief 谁承担运费.可选值:buyer(买家),seller(卖家).如:buyer
 **/
  QString freightPayer;

/**
 * @brief 页码.该字段没传 或 值<1 ,则默认page_no为1
 **/
  qlonglong pageNo;

/**
 * @brief 每页条数.该字段没传 或 值<1 ,则默认page_size为40
 **/
  qlonglong pageSize;

/**
 * @brief 收货人姓名
 **/
  QString receiverName;

/**
 * @brief 卖家是否发货.可选值:yes(是),no(否).如:yes
 **/
  QString sellerConfirm;

/**
 * @brief 创建时间开始
 **/
  QDateTime startCreated;

/**
 * @brief 物流状态.查看数据结构 Shipping 中的status字段.
 **/
  QString status;

/**
 * @brief 交易ID.如果加入tid参数的话,不用传其他的参数,但是仅会返回一条物流订单信息.
 **/
  qlonglong tid;

/**
 * @brief 物流方式.可选值:post(平邮),express(快递),ems(EMS).如:post
 **/
  QString type;

};

#endif  /* LOGISTICSORDERSGETREQUEST_H */
