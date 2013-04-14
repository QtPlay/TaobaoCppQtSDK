#ifndef SIMBAADGROUPCATMATCHGETREQUEST_H
#define SIMBAADGROUPCATMATCHGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaAdgroupCatmatchGetResponse.h>

/**
 * TOP API: 取得一个推广组的类目出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaAdgroupCatmatchGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaAdgroupCatmatchGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组Id
 **/
  qlonglong adgroupId;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAADGROUPCATMATCHGETREQUEST_H */
