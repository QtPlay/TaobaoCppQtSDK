#ifndef INCATEGORYCHILDTOP_H
#define INCATEGORYCHILDTOP_H

#include <TaoApiCpp/TaoDomain.h>
#include <QList>
#include <QString>
#include <TaoApiCpp/domain/INCategoryProperties.h>


/**
 * @brief 类目对象
 * 
 * @author sd44 <sd44sdd44@yeah.net>
 */
class INCategoryChildTop : public TaoDomain
{

public:
 virtual ~INCategoryChildTop() { }

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

#endif  /* INCATEGORYCHILDTOP_H */
