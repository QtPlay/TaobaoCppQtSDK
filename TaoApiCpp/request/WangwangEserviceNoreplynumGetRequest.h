#ifndef WANGWANGESERVICENOREPLYNUMGETREQUEST_H
#define WANGWANGESERVICENOREPLYNUMGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/WangwangEserviceNoreplynumGetResponse.h>

/**
 * TOP API: 根据操作者ID，返回被查者ID指定日期内每个帐号每日的"未回复情况" 
 
备注：1、如果是操作者ID=被查者ID，返回被查者ID的"未回复情况"（未回复人数、未回复的ID）。 
 
    2、如果操作者是组管理员，他可以查询他的组中的所有子帐号的"未回复情况"。 
 
    3、如果操作者是主账户，他可以查询所有子帐号的"未回复情况"。 
    4、被查者ID可以是多个，用 "," 隔开，id数不能超过30。 
    5、开始时间与结束时间之间的间隔不能超过7天 
    6、不能查询90天以前的数据 
    7、不能查询当天的记录
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class WangwangEserviceNoreplynumGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QDateTime getEndDate() const
;  void setEndDate (QDateTime endDate);

 QString getServiceStaffId() const
;  void setServiceStaffId (QString serviceStaffId);

 QDateTime getStartDate() const
;  void setStartDate (QDateTime startDate);


  virtual WangwangEserviceNoreplynumGetResponse *getResponseClass(const QString &session = "",
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

#endif  /* WANGWANGESERVICENOREPLYNUMGETREQUEST_H */
