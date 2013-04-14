#ifndef SIMBARPTCUSTBASEGETREQUEST_H
#define SIMBARPTCUSTBASEGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaRptCustbaseGetResponse.h>

/**
 * TOP API: 客户账户报表基础数据对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaRptCustbaseGetRequest : public TaoRequest
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


  virtual SimbaRptCustbaseGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
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

#endif  /* SIMBARPTCUSTBASEGETREQUEST_H */
