#ifndef SIMBAKEYWORDSBYKEYWORDIDSGETREQUEST_H
#define SIMBAKEYWORDSBYKEYWORDIDSGETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaKeywordsbykeywordidsGetResponse.h>

/**
 * TOP API: 根据一个关键词Id列表取得一组关键词
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsbykeywordidsGetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getKeywordIds() const
;  void setKeywordIds (qlonglong keywordIds);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaKeywordsbykeywordidsGetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 关键词Id数组，最多200个；
 **/
  qlonglong keywordIds;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAKEYWORDSBYKEYWORDIDSGETREQUEST_H */
