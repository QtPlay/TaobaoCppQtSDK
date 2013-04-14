#ifndef INWORDANALYSIS_H
#define INWORDANALYSIS_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 词数据分析对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class INWordAnalysis : public TaoDomain
{

public:
 virtual ~INWordAnalysis() { }

  QString getWord() const;
  void setWord (QString word);
  QString getWordAreaPer() const;
  void setWordAreaPer (QString wordAreaPer);
  QString getWordHpPrice() const;
  void setWordHpPrice (QString wordHpPrice);
  QString getWordSourcePer() const;
  void setWordSourcePer (QString wordSourcePer);
  
  virtual void parseResponse();

private:
/**
 * @brief 词名称
 **/
  QString word;

/**
 * @brief 词地域占比 
格式： 
地域名称:比例;地域名称2:比例2;
 **/
  QString wordAreaPer;

/**
 * @brief 词竞价分布 
格式： 
宝贝数:价格;宝贝数:价格;
 **/
  QString wordHpPrice;

/**
 * @brief 词来源占比 
格式： 
来源名称1:比例值;来源名称2:比例值;
 **/
  QString wordSourcePer;

};

#endif  /* INWORDANALYSIS_H */
