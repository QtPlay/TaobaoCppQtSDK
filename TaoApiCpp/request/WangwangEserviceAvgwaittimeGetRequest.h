#ifndef WANGWANGESERVICEAVGWAITTIMEGETREQUEST_H
#define WANGWANGESERVICEAVGWAITTIMEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WangwangEserviceAvgwaittimeGetResponse.h>

/**
 * TOP API: 根据客服ID和日期，获取该客服"当日接待的所有客户的平均等待时长"。  <br/> 
备注：  <br/> 
1、如果是操作者ID=被查者ID，返回被查者ID的"当日接待的所有客户的平均等待时长"。  <br/> 
2、如果操作者是组管理员，他可以查询他的组中的所有子帐号的"当日接待的所有客户的平均等待时长"。service_staff_id为所有子帐号，用 "," 隔开 <br/> 
3、如果操作者是主账户，他可以查询所有子帐号的"当日接待的所有客户的平均等待时长"。  service_staff_id为所有子帐号，用 "," 隔开<br/> 
 4、被查者ID可以是多个，用 "," 隔开，id数不能超过30。  <br/> 
 5、开始时间与结束时间之间的间隔不能超过7天  <br/> 
 6、不能查询90天以前的数据  <br/> 
 7、不能查询当天的记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceAvgwaittimeGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndDate() const
;  void setEndDate (QDateTime endDate);

 QString getServiceStaffId() const
;  void setServiceStaffId (QString serviceStaffId);

 QDateTime getStartDate() const
;  void setStartDate (QDateTime startDate);


  virtual WangwangEserviceAvgwaittimeGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 结束时间
 **/
  QDateTime endDate;

/**
 * @brief 客服人员id：cntaobao+淘宝nick，例如cntaobaotest
 **/
  QString serviceStaffId;

/**
 * @brief 开始时间
 **/
  QDateTime startDate;

};

#endif  /* WANGWANGESERVICEAVGWAITTIMEGETREQUEST_H */
