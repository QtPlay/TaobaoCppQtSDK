#ifndef INWORDCATEGORY_H
#define INWORDCATEGORY_H

#include <TaoApiCpp/TaoDomain.h>
#include <QDateTime>
#include <QString>


/**
 * @brief 词和类目数据对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class INWordCategory : public TaoDomain
{

public:
 virtual ~INWordCategory() { }

  qlonglong getAvgPrice() const;
  void setAvgPrice (qlonglong avgPrice);
  qlonglong getCategoryId() const;
  void setCategoryId (qlonglong categoryId);
  qlonglong getClick() const;
  void setClick (qlonglong click);
  qlonglong getCompetition() const;
  void setCompetition (qlonglong competition);
  QString getCtr() const;
  void setCtr (QString ctr);
  QDateTime getDate() const;
  void setDate (QDateTime date);
  qlonglong getPv() const;
  void setPv (qlonglong pv);
  QString getWord() const;
  void setWord (QString word);
  
  virtual void parseResponse();

private:
/**
 * @brief 词在类目下平均点击价格
 **/
  qlonglong avgPrice;

/**
 * @brief 类目id
 **/
  qlonglong categoryId;

/**
 * @brief 词在类目下点击量
 **/
  qlonglong click;

/**
 * @brief 词在类目下竞争宝贝数(包括未展现客户)
 **/
  qlonglong competition;

/**
 * @brief 点击率
 **/
  QString ctr;

/**
 * @brief 时间点
 **/
  QDateTime date;

/**
 * @brief 词在类目下展现量
 **/
  qlonglong pv;

/**
 * @brief 词名称
 **/
  QString word;

};

#endif  /* INWORDCATEGORY_H */
