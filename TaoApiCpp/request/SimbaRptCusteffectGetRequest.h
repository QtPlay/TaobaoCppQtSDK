#ifndef SIMBARPTCUSTEFFECTGETREQUEST_H
#define SIMBARPTCUSTEFFECTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaRptCusteffectGetResponse.h>

/**
 * TOP API: 用户账户报表效果数据查询（只有汇总数据，无分类数据）
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptCusteffectGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getEndTime() const
;  void setEndTime (QString endTime);

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QString getSource() const
;  void setSource (QString source);

 QString getStartTime() const
;  void setStartTime (QString startTime);

 QString getSubwayToken() const
;  void setSubwayToken (QString subwayToken);


  virtual SimbaRptCusteffectGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 结束时间，格式yyyy-mm-dd
 **/
  QString endTime;

/**
 * @brief 主人昵称
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
 * @brief 数据来源（站内：1，站外：2 ，汇总：SUMMARY）SUMMARY必须单选，其他值可多选例如1,2
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

#endif  /* SIMBARPTCUSTEFFECTGETREQUEST_H */
