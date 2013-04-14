#ifndef SIMBAKEYWORDKEYWORDFORECASTGETREQUEST_H
#define SIMBAKEYWORDKEYWORDFORECASTGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaKeywordKeywordforecastGetResponse.h>

/**
 * TOP API: 根据词ID和给定的出价获取词的预估信息
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordKeywordforecastGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getBidwordPrice() const
;  void setBidwordPrice (qlonglong bidwordPrice);

 qlonglong getKeywordId() const
;  void setKeywordId (qlonglong keywordId);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaKeywordKeywordforecastGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 词的出价,范围在5-9999之间,单位分
 **/
  qlonglong bidwordPrice;

/**
 * @brief 词ID
 **/
  qlonglong keywordId;

/**
 * @brief 经典名表行
 **/
  QString nick;

};

#endif  /* SIMBAKEYWORDKEYWORDFORECASTGETREQUEST_H */
