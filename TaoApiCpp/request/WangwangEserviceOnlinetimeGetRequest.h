#ifndef WANGWANGESERVICEONLINETIMEGETREQUEST_H
#define WANGWANGESERVICEONLINETIMEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WangwangEserviceOnlinetimeGetResponse.h>

/**
 * TOP API: 描述：根据客服ID和日期，获取该客服"当日在线时长"。 
 
备注：1、如果是操作者ID=被查者ID，返回被查者ID的"当日在线时长"。 
 
    2、如果操作者是组管理员，他可以查询他的组中的所有子帐号的"当日在线时长"。 
 
    3、如果操作者是主账户，他可以查询所有子帐号的"当日在线时长"。 
    4、被查者ID可以是多个，用 "," 隔开，id数不能超过30。 
    5、日累计在线时长定义：当日该用户累计的旺旺在线时长 
 
    6、开始时间与结束时间之间的间隔不能超过7天 
    7、不能查询90天以前的数据 
    8、不能查询当天的记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceOnlinetimeGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndDate() const
;  void setEndDate (QDateTime endDate);

 QString getServiceStaffId() const
;  void setServiceStaffId (QString serviceStaffId);

 QDateTime getStartDate() const
;  void setStartDate (QDateTime startDate);


  virtual WangwangEserviceOnlinetimeGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 结束日期
 **/
  QDateTime endDate;

/**
 * @brief 客服人员id：cntaobao+淘宝nick，例如cntaobaotest
 **/
  QString serviceStaffId;

/**
 * @brief 开始日期
 **/
  QDateTime startDate;

};

#endif  /* WANGWANGESERVICEONLINETIMEGETREQUEST_H */
