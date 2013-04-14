#ifndef INCATEGORYANALYSIS_H
#define INCATEGORYANALYSIS_H

#include <TaoApiCpp/TaoDomain.h>
#include <QString>


/**
 * @brief 类目数据分析对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class INCategoryAnalysis : public TaoDomain
{

public:
 virtual ~INCategoryAnalysis() { }

  QString getCategoryAreaPer() const;
  void setCategoryAreaPer (QString categoryAreaPer);
  QString getCategoryHpPrice() const;
  void setCategoryHpPrice (QString categoryHpPrice);
  qlonglong getCategoryId() const;
  void setCategoryId (qlonglong categoryId);
  QString getCategoryName() const;
  void setCategoryName (QString categoryName);
  QString getCategorySourcePer() const;
  void setCategorySourcePer (QString categorySourcePer);
  
  virtual void parseResponse();

private:
/**
 * @brief 地域占比 
格式： 
地域名称:占比;地域名称:占比;
 **/
  QString categoryAreaPer;

/**
 * @brief 竞价分布 
格式： 
宝贝数:价格;宝贝数:价格;
 **/
  QString categoryHpPrice;

/**
 * @brief 类目id
 **/
  qlonglong categoryId;

/**
 * @brief 类目名称
 **/
  QString categoryName;

/**
 * @brief 来源占比 
格式： 
来源名称:比例;来源名称:比例;
 **/
  QString categorySourcePer;

};

#endif  /* INCATEGORYANALYSIS_H */
