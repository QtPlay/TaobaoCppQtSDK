#ifndef USERTRADESEARCHREQUEST_H
#define USERTRADESEARCHREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/UserTradeSearchResponse.h>

/**
 * TOP API: 查询支付宝账户交易记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class UserTradeSearchRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getAlipayOrderNo() const
;  void setAlipayOrderNo (QString alipayOrderNo);

 QString getEndTime() const
;  void setEndTime (QString endTime);

 QString getMerchantOrderNo() const
;  void setMerchantOrderNo (QString merchantOrderNo);

 QString getOrderFrom() const
;  void setOrderFrom (QString orderFrom);

 QString getOrderStatus() const
;  void setOrderStatus (QString orderStatus);

 QString getOrderType() const
;  void setOrderType (QString orderType);

 QString getPageNo() const
;  void setPageNo (QString pageNo);

 QString getPageSize() const
;  void setPageSize (QString pageSize);

 QString getStartTime() const
;  void setStartTime (QString startTime);


  virtual UserTradeSearchResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 支付宝订单号，为空查询所有记录
 **/
  QString alipayOrderNo;

/**
 * @brief 结束时间。与开始时间间隔在七天之内
 **/
  QString endTime;

/**
 * @brief 商户订单号，为空查询所有记录
 **/
  QString merchantOrderNo;

/**
 * @brief 订单来源，为空查询所有来源。淘宝(TAOBAO)，支付宝(ALIPAY)，其它(OTHER)
 **/
  QString orderFrom;

/**
 * @brief 订单状态，为空查询所有状态订单
 **/
  QString orderStatus;

/**
 * @brief 订单类型，为空查询所有类型订单。
 **/
  QString orderType;

/**
 * @brief 页码。取值范围:大于零的整数; 默认值1
 **/
  QString pageNo;

/**
 * @brief 每页获取条数。最大值500。
 **/
  QString pageSize;

/**
 * @brief 开始时间，时间必须是今天范围之内。格式为yyyy-MM-dd HH:mm:ss，精确到秒
 **/
  QString startTime;

};

#endif  /* USERTRADESEARCHREQUEST_H */
