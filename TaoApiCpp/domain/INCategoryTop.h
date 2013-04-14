#ifndef INCATEGORYTOP_H
#define INCATEGORYTOP_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/INCategoryChildTop.h>
#include <TaoApiCpp/domain/INCategoryProperties.h>


/**
 * @brief 类目对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class INCategoryTop : public TaoDomain
{

public:
 virtual ~INCategoryTop() { }

  QList<INCategoryChildTop> getCategoryChildTopList() const;
  void setCategoryChildTopList (QList<INCategoryChildTop> categoryChildTopList);
  QString getCategoryDesc() const;
  void setCategoryDesc (QString categoryDesc);
  qlonglong getCategoryId() const;
  void setCategoryId (qlonglong categoryId);
  QString getCategoryName() const;
  void setCategoryName (QString categoryName);
  QList<INCategoryProperties> getCategoryPropertiesList() const;
  void setCategoryPropertiesList (QList<INCategoryProperties> categoryPropertiesList);
  
  virtual void parseResponse();

private:
/**
 * @brief 子类目列表
 **/
  QList<INCategoryChildTop> categoryChildTopList;

/**
 * @brief 类目属性描述
 **/
  QString categoryDesc;

/**
 * @brief 类目对象id
 **/
  qlonglong categoryId;

/**
 * @brief 类目名称
 **/
  QString categoryName;

/**
 * @brief 类目属性对象列表
 **/
  QList<INCategoryProperties> categoryPropertiesList;

};

#endif  /* INCATEGORYTOP_H */
