#ifndef SIMBARPTCAMPAIGNBASEGETREQUEST_H
#define SIMBARPTCAMPAIGNBASEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaRptCampaignbaseGetResponse.h>

/**
 * TOP API: 推广计划报表基础数据对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptCampaignbaseGetRequest : public TaoRequest
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

 QString getSearchType() const
;  void setSearchType (QString searchType);

 QString getSource() const
;  void setSource (QString source);

 QString getStartTime() const
;  void setStartTime (QString startTime);

 QString getSubwayToken() const
;  void setSubwayToken (QString subwayToken);


  virtual SimbaRptCampaignbaseGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广计划id
 **/
  qlonglong campaignId;

/**
 * @brief 结束时间，格式yyyy-mm-dd
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
 * @brief 报表类型（搜索：SEARCH,类目出价：CAT, 定向投放：NOSEARCH 全部：ALL）可以一次取多个例如：SEARCH,CAT
 **/
  QString searchType;

/**
 * @brief 数据来源（站内：1，站外：2）可多选以逗号分隔，默认值为：1,2
 **/
  QString source;

/**
 * @brief 开始时间，格式yyyy-mm-dd
 **/
  QString startTime;

/**
 * @brief 权限校验参数
 **/
  QString subwayToken;

};

#endif  /* SIMBARPTCAMPAIGNBASEGETREQUEST_H */
