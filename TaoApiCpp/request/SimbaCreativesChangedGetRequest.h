#ifndef SIMBACREATIVESCHANGEDGETREQUEST_H
#define SIMBACREATIVESCHANGEDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaCreativesChangedGetResponse.h>

/**
 * TOP API: 分页获取修改过的广告创意ID和修改时间
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaCreativesChangedGetRequest : public TaoRequest
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


  virtual SimbaCreativesChangedGetResponse *getResponseClass(const QString &session = "",
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

#endif  /* SIMBACREATIVESCHANGEDGETREQUEST_H */
