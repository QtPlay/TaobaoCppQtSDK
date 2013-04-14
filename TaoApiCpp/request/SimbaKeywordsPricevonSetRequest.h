#ifndef SIMBAKEYWORDSPRICEVONSETREQUEST_H
#define SIMBAKEYWORDSPRICEVONSETREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaKeywordsPricevonSetResponse.h>

/**
 * TOP API: 设置一批关键词的出价
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsPricevonSetRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 QString getKeywordidPrices() const
;  void setKeywordidPrices (QString keywordidPrices);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaKeywordsPricevonSetResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 关键词ID，出价和匹配方式json字符串，keywordId:词ID，整数。maxPrice：价格，是整数，以“分”为单位，不能小于5，不能大于日限额,当使用默认出价时必须将这个值设置为0。; isDefaultPrice：是否使用默认出价，只能是0，1(0代表不使用，1代表使用)。matchscope只能是1,2,4（1代表精确匹配，2代表子串匹配，4代表广泛匹配）
 **/
  QString keywordidPrices;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAKEYWORDSPRICEVONSETREQUEST_H */
