#ifndef SIMBAKEYWORDIDSDELETEDGETREQUEST_H
#define SIMBAKEYWORDIDSDELETEDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaKeywordidsDeletedGetResponse.h>

/**
 * TOP API: 获取删除的词ID
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordidsDeletedGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getNick() const
;  void setNick (QString nick);

 qlonglong getPageNo() const
;  void setPageNo (qlonglong pageNo);

 qlonglong getPageSize() const
;  void setPageSize (qlonglong pageSize);

 QDateTime getStartTime() const
;  void setStartTime (QDateTime startTime);


  virtual SimbaKeywordidsDeletedGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 主人昵称
 **/
  QString nick;

/**
 * @brief 返回的第几页数据，默认为1
 **/
  qlonglong pageNo;

/**
 * @brief 返回的每页数据量大小,默认200最大1000
 **/
  qlonglong pageSize;

/**
 * @brief 得到此时间点之后的数据，不能大于一个月
 **/
  QDateTime startTime;

};

#endif  /* SIMBAKEYWORDIDSDELETEDGETREQUEST_H */
