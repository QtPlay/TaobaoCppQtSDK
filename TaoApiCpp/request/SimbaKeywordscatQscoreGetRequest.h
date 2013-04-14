#ifndef SIMBAKEYWORDSCATQSCOREGETREQUEST_H
#define SIMBAKEYWORDSCATQSCOREGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaKeywordscatQscoreGetResponse.h>

/**
 * TOP API: 取得一个推广组的所有关键词和类目出价的质量得分列表
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordscatQscoreGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaKeywordscatQscoreGetResponse *getResponseClass(const QString &session = "",
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

#endif  /* SIMBAKEYWORDSCATQSCOREGETREQUEST_H */
