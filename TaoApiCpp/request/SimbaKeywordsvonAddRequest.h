#ifndef SIMBAKEYWORDSVONADDREQUEST_H
#define SIMBAKEYWORDSVONADDREQUEST_H

#include <TaoApiCpp/TaoRequest.h>
#include <TaoApiCpp/TaoParser.h>
#include <TaoApiCpp/response/SimbaKeywordsvonAddResponse.h>

/**
 * TOP API: 创建一批关键词
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class SimbaKeywordsvonAddRequest : public TaoRequest
{
 public:
  virtual QString getApiMethodName() const;

 qlonglong getAdgroupId() const
;  void setAdgroupId (qlonglong adgroupId);

 QString getKeywordPrices() const
;  void setKeywordPrices (QString keywordPrices);

 QString getNick() const
;  void setNick (QString nick);


  virtual SimbaKeywordsvonAddResponse *getResponseClass(const QString &session = "",
                               const QString &accessToken = ""); 

 private:
/**
 * @brief 推广组id
 **/
  qlonglong adgroupId;

/**
 * @brief 关键词，出价和匹配方式json字符串，word:词，不能有一些特殊字符。maxPrice：价格，是整数，以“分”为单位，不能小于5，不能大于日限额,当使用默认出价时必须将这个值设置为0。; isDefaultPrice：是否使用默认出价，只能是0，1(0代表不使用，1代表使用)。matchscope只能是1,2,4（1代表精确匹配，2代表子串匹配，4代表广泛匹配）。
 **/
  QString keywordPrices;

/**
 * @brief 主人昵称
 **/
  QString nick;

};

#endif  /* SIMBAKEYWORDSVONADDREQUEST_H */
