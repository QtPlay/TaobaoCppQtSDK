#ifndef BILLBILLSGETREQUEST_H
#define BILLBILLSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/BillBillsGetResponse.h>

/**
 * TOP API: 查询账单明细数据
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class BillBillsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAccountId() const
;  void setAccountId (qlonglong accountId);

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 QString getFields() const
;  void setFields (QString fields);

 qlonglong getOrderId() const
;  void setOrderId (qlonglong orderId);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartTime() const
;  void setStartTime (QDateTime startTime);

 qlonglong getTimeType() const
;  void setTimeType (qlonglong timeType);

 qlonglong getTradeId() const
;  void setTradeId (qlonglong tradeId);


  virtual BillBillsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 科目编号
 **/
  qlonglong accountId;

/**
 * @brief 结束时间,限制:结束时间-开始时间不能大于1天(根据order_id或者trade_id查询除外)
 **/
  QDateTime endTime;

/**
 * @brief 传入需要返回的字段,参见Bill结构体
 **/
  QString fields;

/**
 * @brief 子订单编号
 **/
  qlonglong orderId;

/**
 * @brief 页数,建议不要超过100页,越大性能越低,有可能会超时
 **/
  qlonglong pageNo;

/**
 * @brief 每页大小,默认40条,可选范围 ：40~100
 **/
  qlonglong pageSize;

/**
 * @brief 开始时间
 **/
  QDateTime startTime;

/**
 * @brief 查询条件中的时间类型:1-交易订单完成时间biz_time 2-支付宝扣款时间pay_time 如果不填默认为2即根据支付时间查询,查询的结果会根据该时间倒排序
 **/
  qlonglong timeType;

/**
 * @brief 交易编号
 **/
  qlonglong tradeId;

};

#endif  /* BILLBILLSGETREQUEST_H */
