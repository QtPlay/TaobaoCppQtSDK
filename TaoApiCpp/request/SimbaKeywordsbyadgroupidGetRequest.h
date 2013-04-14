#ifndef SIMBAKEYWORDSBYADGROUPIDGETREQUEST_H
#define SIMBAKEYWORDSBYADGROUPIDGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaKeywordsbyadgroupidGetResponse.h>

/**
 * TOP API: 取得一个推广组的所有关键词
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsbyadgroupidGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaKeywordsbyadgroupidGetResponse *getResponseClass(const QString &session = "",
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

#endif  /* SIMBAKEYWORDSBYADGROUPIDGETREQUEST_H */
