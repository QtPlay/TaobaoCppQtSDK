#ifndef SIMBAKEYWORDSQSCOREGETREQUEST_H
#define SIMBAKEYWORDSQSCOREGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaKeywordsQscoreGetResponse.h>

/**
 * TOP API: 取得一个推广组的所有关键词的质量得分列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsQscoreGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaKeywordsQscoreGetResponse *getResponseClass(const QString &session = "",
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

#endif  /* SIMBAKEYWORDSQSCOREGETREQUEST_H */
