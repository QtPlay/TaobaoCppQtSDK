#ifndef SIMBARPTADGROUPCREATIVEEFFECTGETREQUEST_H
#define SIMBARPTADGROUPCREATIVEEFFECTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaRptAdgroupcreativeeffectGetResponse.h>

/**
 * TOP API: 推广组下的创意报表效果数据查询(汇总数据，不分类型)
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptAdgroupcreativeeffectGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

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


  virtual SimbaRptAdgroupcreativeeffectGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组id
 **/
  qlonglong adgroupId;

/**
 * @brief 查询推广计划id
 **/
  qlonglong campaignId;

/**
 * @brief 结束日期，格式yyyy-mm-dd
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
 * @brief 报表类型（搜索：SEARCH,类目出价：CAT, 定向投放：NOSEARCH汇总：SUMMARY）SUMMARY必须单选，其他值可多选例如：SEARCH,CAT
 **/
  QString searchType;

/**
 * @brief 数据来源（站内：1，站外：2 ，汇总：SUMMARY）SUMMARY必须单选，其他值可多选例如1,2
 **/
  QString source;

/**
 * @brief 开始日期，格式yyyy-mm-dd
 **/
  QString startTime;

/**
 * @brief 权限验证信息
 **/
  QString subwayToken;

};

#endif  /* SIMBARPTADGROUPCREATIVEEFFECTGETREQUEST_H */
