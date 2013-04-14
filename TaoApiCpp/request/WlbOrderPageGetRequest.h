#ifndef WLBORDERPAGEGETREQUEST_H
#define WLBORDERPAGEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WlbOrderPageGetResponse.h>

/**
 * TOP API: 分页查询物流宝订单
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WlbOrderPageGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndTime() const
;  void setEndTime (QDateTime endTime);

 QString getOrderCode() const
;  void setOrderCode (QString orderCode);

 qlonglong getOrderStatus() const
;  void setOrderStatus (qlonglong orderStatus);

 QString getOrderSubType() const
;  void setOrderSubType (QString orderSubType);

 QString getOrderType() const
;  void setOrderType (QString orderType);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartTime() const
;  void setStartTime (QDateTime startTime);


  virtual WlbOrderPageGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 查询截止时间
 **/
  QDateTime endTime;

/**
 * @brief 物流订单编号
 **/
  QString orderCode;

/**
 * @brief 订单状态
 **/
  qlonglong orderStatus;

/**
 * @brief 订单子类型：  
（1）OTHER： 其他  
（2）TAOBAO_TRADE： 淘宝交易  
（3）OTHER_TRADE：其他交易 
（4）ALLCOATE： 调拨 
（5）CHECK:  盘点单 
（6）PURCHASE: 采购单
 **/
  QString orderSubType;

/**
 * @brief 订单类型:  
（1）NORMAL_OUT ：正常出库  
（2）NORMAL_IN：正常入库  
（3）RETURN_IN：退货入库  
（4）EXCHANGE_OUT：换货出库
 **/
  QString orderType;

/**
 * @brief 分页的第几页
 **/
  qlonglong pageNo;

/**
 * @brief 每页多少条
 **/
  qlonglong pageSize;

/**
 * @brief 查询开始时间
 **/
  QDateTime startTime;

};

#endif  /* WLBORDERPAGEGETREQUEST_H */
