#ifndef LOGISTICSTRACESEARCHRESPONSE_H
#define LOGISTICSTRACESEARCHRESPONSE_H

#include <TaoApiCpp/TaoResponse.h>
#include <QList>
#include <TaoApiCpp/domain/TransitStepInfo.h>


/**
 * @brief TOP RESPONSE API: 用户根据淘宝交易号查询物流流转信息，如2010-8-10 15：23：00到达杭州集散地。 
此接口的返回信息都由物流公司提供。
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class LogisticsTraceSearchResponse : public TaoResponse
{
public:
 virtual ~LogisticsTraceSearchResponse() { }

  QString getCompanyName() const;
  void setCompanyName (QString companyName);  QString getOutSid() const;
  void setOutSid (QString outSid);  QString getStatus() const;
  void setStatus (QString status);  qlonglong getTid() const;
  void setTid (qlonglong tid);  QList<TransitStepInfo> getTraceList() const;
  void setTraceList (QList<TransitStepInfo> traceList);
  virtual void parseNormalResponse();

 private:
/**
 * @brief 物流公司名称
 **/
  QString companyName;

/**
 * @brief 运单号
 **/
  QString outSid;

/**
 * @brief 订单的物流状态
* 等候发送给物流公司
*已提交给物流公司,等待物流公司接单
*已经确认消息接收，等待物流公司接单
*物流公司已接单
*物流公司不接单
*物流公司揽收失败
*物流公司揽收成功
*签收失败
*对方已签收
*对方拒绝签收
 **/
  QString status;

/**
 * @brief 交易号
 **/
  qlonglong tid;

/**
 * @brief 流转信息列表
 **/
  QList<TransitStepInfo> traceList;

};

#endif
