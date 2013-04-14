#ifndef SIMBARPTDEMOGRAPHICBASEGETREQUEST_H
#define SIMBARPTDEMOGRAPHICBASEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaRptDemographicbaseGetResponse.h>

/**
 * TOP API: 推广计划下的人群基础数据查询
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptDemographicbaseGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getCampaignId() const
;  void setCampaignId (qlonglong campaignId);

 QString getEndTime() const
;  void setEndTime (QString endTime);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getStartTime() const
;  void setStartTime (QString startTime);

 QString getSubwayToken() const
;  void setSubwayToken (QString subwayToken);


  virtual SimbaRptDemographicbaseGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广计划id
 **/
  qlonglong campaignId;

/**
 * @brief 结束时间,格式为：yyyy-mm-dd
 **/
  QString endTime;

/**
 * @brief 昵称
 **/
  QString nick;

/**
 * @brief 页码
 **/
  qlonglong pageNo;

/**
 * @brief 每页大小
 **/
  qlonglong pageSize;

/**
 * @brief 开始时间,格式为：yyyy-mm-dd
 **/
  QString startTime;

/**
 * @brief 权限校验参数
 **/
  QString subwayToken;

};

#endif  /* SIMBARPTDEMOGRAPHICBASEGETREQUEST_H */
